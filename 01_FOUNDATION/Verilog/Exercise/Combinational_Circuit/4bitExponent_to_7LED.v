module led7doan (
    input  [3:0] x,
    output [6:0] hex
);
    always @(*) begin
        case (x)
            4'd0: hex = 7'b1000000;
            4'd1: hex = 7'b1111001;
            4'd2: hex = 7'b0100100;
            4'd3: hex = 7'b0110000;
            4'd4: hex = 7'b0011001;
            4'd5: hex = 7'b0010010;
            4'd6: hex = 7'b0000010;
            4'd7: hex = 7'b1111000;
            4'd8: hex = 7'b0000000;
            4'd9: hex = 7'b0010000;
            default: hex = 7'b1111111;
        endcase
    end
endmodule


module binhphuong4bit (
    input  [3:0] A,
    output [6:0] hex0,
    output [6:0] hex1,
    output [6:0] hex2
);
    wire [7:0] square;
    wire [3:0] donvi, chuc, tram;

    assign square = A * A;
    assign tram   = square / 8'd100;
    assign chuc   = (square % 8'd100) / 8'd10;
    assign donvi  = square % 8'd10;

    led7doan H0 (.x(donvi), .hex(hex0));
    led7doan H1 (.x(chuc),  .hex(hex1));
    led7doan H2 (.x(tram),  .hex(hex2));
endmodule
