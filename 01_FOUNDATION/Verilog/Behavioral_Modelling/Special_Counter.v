module counter (
    input clk, rst,
    output reg [1:0] doutr, doutj
);

//---------RING COUNTER---------------//
always@(posedge clk)
begin
    if( rst==1'b1)
    begin
        doutr <= 2'b01;
    end
    else 
    begin
        doutr[1] <= doutr[0];
        doutr[0] <= doutr[1];
    end
end

//------------JOHNSON COUNTER----------//
always@(posedge clk)
begin 
    if(rst==1'b1)
    begin 
        doutr <= 2'b00;
    end
    else 
    begin 
        doutr[1] <= ~doutr[0];
        doutr[0] <= doutr[1];
    end
end

endmodule


