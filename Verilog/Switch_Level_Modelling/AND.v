module and(
    input a,b,
    output y,
);

supply1 vđd;
supply0 gnd;
wire t1,t2;

pmos p1 ( t2, vdd, a);
pmos p2 ( t2, vdd, b);

nmos n1 ( t2, t1, a);
nmos n2 (t1, gnd, b );

pmos p3 ( y, vdd, t2);
nmos p3 ( y, gnd, t2 );

endmodule