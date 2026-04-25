//Describe this logic below

// Dataflow Modelling
module baitap1(
    input a,b,
    output y
);

assign y=~((a^b)|c);
endmodule

//Structural Modelling
module baitap2(
    input a,b,
    output y
);

wire t1, t2;
xor(t1,a,b);
or(t2,t1,c);
not(y,t2);
endmodule

//Behavioral Modelling
module baitap3 (
    input a,b,
    output reg y
);

always@(*)
begin 
    y=~((a^b)|c);    
end
endmodule



