module FA(
    input a,b,cin,
    output s, cout
);

wire t1,t2,t3;
assign t1= a^b;
assign t2= t1|cin;
assign t3=a&b;
assign s=cin^t1;
assign cout=t2|t3;

endmodule