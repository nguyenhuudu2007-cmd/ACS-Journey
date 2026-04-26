`timescale 1ps/

// 1. TB code do not have any i/o port
// 2. All input of DUT , declare reg variable in TB
// 3. All output of DUT, declare wire variable in TB

module tb;

reg clk=0;
initial begin
    clk=0;
end

always #5 clk = ~clk;

initial begin 
    #500;
    $finish;
end

endmodule 