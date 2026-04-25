// Combinational Circuit: it depends on all the inputs. Whenever any variables changes, we need to revalue the expression.
// Sequential Circuit: output depends on the fastest signal that is usually used as clock signal.

always @(*)// = always@ (a,b,c)

always @( posedge clk ) //kích cạnh lên
always @(negedge clk ) //kích cạnh xuống 

always @(posedge clk, posedge rst )
begin
    
end
