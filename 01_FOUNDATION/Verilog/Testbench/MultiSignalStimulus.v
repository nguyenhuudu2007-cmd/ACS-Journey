`timescale 1ns/1ps

module tb;
reg [3:0] data;
integer i=0;
initial begin 
// $urandom, $random, $randon_range(min,max);
// for 
for ( i=0; i<20;i=i+1 )
begin 
    data= $urandom_range(0,5);
    #20;
end
end

endmodule


