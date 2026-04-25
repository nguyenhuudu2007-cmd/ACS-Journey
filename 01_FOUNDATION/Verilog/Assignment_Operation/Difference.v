module tb;

reg b = 0;
reg a = 1;

wire y;
reg w; 


assign y = a & b;

always@(a,b)
begin
w = a & b;
end


endmodule