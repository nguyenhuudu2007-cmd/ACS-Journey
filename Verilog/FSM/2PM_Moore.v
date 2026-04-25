//------------- 3-Process Methodology----------------//

// Reset Logic: seq always ( clk ) 
// Next State Logic: comb always (state, din )
// Output Logic: com always (state )

`timescale 1ns/ 1ps

module fsm(
    input clk, rst, din
    output reg dout
);

parameter idle = 0;
parameter s0 = 1;
parameter s1 = 2;

reg [1:0] state= idle, nstate=idle;

//Reset logic: Sequential 
always @(posedge clk)
begin
    if(rst==1'b1)
    state<=idle;
    else 
    state<=nstate;
end

//Next State Decoder + Output
always@ (state)
begin
    case(state)
    dout=1'b0;
    idle:begin
        nstate=s0;
    end

    s0:begin
        dout=1'b0;
        if ( din ==1'b1 )
        nstate =s1;
        else
        nstate=s0;
    end

    s1: begin
        dou=1'b1;
        if( din==1'b1 )
        nstate=s0;
        else 
        nstate =s1;
    end

    default: 
    dout=1'b0;
    nstate = idle;
    end
    endcase
end
endmodule  

//--------------TESTBENCH CODE-------------//

module tb(
);

reg clk = 0, rst = 0, din = 0;
wire dout;
integer i = 0;


fsm dut (clk,rst,din,dout);

always #10 clk = ~clk;

initial begin
rst = 1;
#40;
rst = 0;
end

initial begin
#40;
for(i = 0; i < 10; i = i + 1)
begin
din = 1;
@(posedge clk);
din = 0;
@(posedge clk);
end
end

initial begin
#500;
$finish;
end

endmodule