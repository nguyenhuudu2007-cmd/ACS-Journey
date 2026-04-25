module 4_to_1_MUX(
    input a,b,c,d,
    input [1:0] sel,
    output reg x
);

always@(*)
begin 
    if( sel==2'b00 )
        x=a;
    else if ( sel==2'b01 )
        x=b;
    else if ( sel==2'b10 )
        x=c;
    else 
        x=d;
end
endmodule 
