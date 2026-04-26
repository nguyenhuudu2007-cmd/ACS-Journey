`timescale 1ns/1ps

module tb;
reg [3:0] data;
integer i=0;

task randomDataGen;
begin 
// $urandom, $random, $randon_range(min,max);
// for 
    for ( i=0; i<20;i=i+1 )
    begin 
        data= $urandom_range(0,5);
        #20;
    end
end
endtask

task data_with_range;
begin
    for (i=0;i<20;i=i+1)
    begin
        data=$urandom_range(0,5);
        #20;
    end
end
endtask

initial begin
    #20;
    randomDataGen();
    #20;
    data_with_range();
end

endmodule