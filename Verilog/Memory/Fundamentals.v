// Block RAM: dedicated memory resources
// Distributed RAM: use the logic resources of an FPGA to implement a memory

//-----IMPLEMENTATION------//
// General Code: useful when we are least interested in which resource utilize for a memory implementation
// Language Template: a specific coding style that guides the synthesis tool to implement a memory in a specific way
// IP Cores: pre-designed and optimized memory blocks provided by FPGA vendors

//-----Memory Size--------//
// 32 ( depth ) x 8 ( Size )

/* 0 -> 8bit
   1
  ...
  31*/

  // reg <size> <memory instance name> <depth>;
reg [7:0] name [31:0]; 
reg [15:0] mem [127:0];