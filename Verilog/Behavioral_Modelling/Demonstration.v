`timescale 1ns / 1ps


module tb();

reg a = 0;
reg b = 0;


reg c = 0;
reg d = 0;


initial begin
#10;
a = 1'b1;
#10;
b = 1'b1;
#10;
a = 1'b0;
#10;
b = 1'b0;
end


initial begin
c <= #10 1'b1;
d <= #10 1'b1;
#10;
c <= #10 1'b0;
d <= #10 1'b0;
#10;
c <= #10 1'b1;
d <= #10 1'b1;
#10;
c <= #10 1'b0;
d <= #10 1'b0;
end

endmodule