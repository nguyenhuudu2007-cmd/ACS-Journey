module 1bit_comparator(
    input a,b,g,
    output eq, gt, lt
);

assign eq=~(a^b);
assign gt=a&~b;
assign lt=~a&b;
endmodule

module 4bit_comparator(
    input [3:0]a,b,
    output eq, gt, lt
);

wire eq0, eq1, eq2, eq3;
wire gt0, gt1, gt2, gt3;
wire lt0, lt1, lt2, lt3;

1bit_comparator U0 (a[0], b[0], 1'b1, eq0, gt0, lt0),
                U1 (a[1], b[1], eq0, eq1, gt1, lt1),
                U2 (a[2], b[2], eq1, eq2, gt2, lt2),
                U3 (a[3], b[3], eq2, eq3, gt3, lt3);
                assign eq=eq3;
                assign gt=gt3;
                assign lt=lt3;
endmodule
