`timescale 1ns/1ns

module tb;
reg rst =0;

initial begin
    rst=1'b1;
    #100
    rst=1'b0;
end

endmodule