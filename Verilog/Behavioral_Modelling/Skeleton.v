// 1. Declare Module
// 2. Declare temporary reg variable for output
// 3. Initialize all the reg variable 
// 4. Implement system  behavior with procedural block 
// 5. Assign value of temporary variable to output 
module top(
    intput a,b,
    output y //Nếu dùng reg y thì trực tiếp gán y=a&b mà không cần thông qua temp
);

reg temp;

initial begin
    temp=0;
end

always (*)
begin
    temp=a&b;
end

assign y=temp;
endmodule
