module FA (
    input a, b, cin,
    output s, cout
);

assign s = a ^ b ^ cin;
assign cout = (a & b) | (b & cin) | (a & cin);

endmodule

module bfa_to_7led(
    input [3:0] a,
    input [3:0] b,
    input cin,
    output [6:0] led
);

wire [3:0] s;
wire c1, c2, c3, cout;

FA U0 (a[0], b[0], cin, s[0], c1);
FA U1 (a[1], b[1], c1,  s[1], c2);
FA U2 (a[2], b[2], c2,  s[2], c3);
FA U3 (a[3], b[3], c3,  s[3], cout);

assign led = (s == 4'd0) ? 7'b1000000 :
             (s == 4'd1) ? 7'b1111001 :
             (s == 4'd2) ? 7'b0100100 :
             (s == 4'd3) ? 7'b0110000 :
             (s == 4'd4) ? 7'b0011001 :
             (s == 4'd5) ? 7'b0010010 :
             (s == 4'd6) ? 7'b0000010 :
             (s == 4'd7) ? 7'b1111000 :
             (s == 4'd8) ? 7'b0000000 :
             (s == 4'd9) ? 7'b0010000 :
             (s == 4'd10) ? 7'b0001000 :
             (s == 4'd11) ? 7'b0000011 :
             (s == 4'd12) ? 7'b1000110 :
             (s == 4'd13) ? 7'b0100001 :
             (s == 4'd14) ? 7'b0000110 :
                            7'b0001110;

endmodule