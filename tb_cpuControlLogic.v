`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:11:46 11/15/2020
// Design Name:   cpuControlLogic
// Module Name:   C:/Users/sosav/Downloads/ECE414_Project_Files_2020/FinalProject/tb_cpuControlLogic.v
// Project Name:  FinalProject
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cpuControlLogic
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_cpuControlLogic;

	// Inputs
	reg clk;
	reg reset;
	reg [3:0] opcode;
	reg [3:0] Rd;

	// Outputs
	wire [2:0] FS;
	wire [1:0] PS;
	wire MB;
	wire MD;
	wire RW;
	wire MW;
	wire BC;
	wire BL;
	wire IL;

	// Instantiate the Unit Under Test (UUT)
	cpuControlLogic uut (
		.clk(clk), 
		.reset(reset), 
		.opcode(opcode), 
		.Rd(Rd), 
		.FS(FS), 
		.PS(PS), 
		.MB(MB), 
		.MD(MD), 
		.RW(RW), 
		.MW(MW), 
		.BC(BC), 
		.BL(BL), 
		.IL(IL)
	);

	initial begin
		// Initialize Inputs
		reset = 1;
		clk = 1;
		opcode = 0;
		Rd = 0;
		#10;
      reset = 0;

	end
	
	always # 10 clk = ~clk;
      
endmodule

