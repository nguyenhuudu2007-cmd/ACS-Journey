// 1. Subsystem code must bê in the same proẹct directory 
// 2. Module name must be used to access subsystem
// Board mapping: explicit + mapping by name, implicit + mapping by position

//Sample
module ha (
    input a,b,
    output s,c
);

module fa ( input p,q,rin
            output w,rout);
    ha H1 (.a(p), .s(w), .c(rout), .b(q));
    ha H2 ( p, q, w, rout );
