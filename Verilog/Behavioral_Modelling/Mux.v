module mux (
    input a,b,
    input sel,
    output reg x
);

always@(*)
begin 
    if( sel== 1'b0 )
        x=a;
    else 
        x=b;
end


endmodule


