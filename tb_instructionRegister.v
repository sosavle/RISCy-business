`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:49:31 11/15/2020
// Design Name:   instructionRegister
// Module Name:   C:/Users/sosav/Downloads/ECE414_Project_Files_2020/FinalProject/tb_instructionRegister.v
// Project Name:  FinalProject
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: instructionRegister
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_instructionRegister;

	// Inputs
	reg clk;
	reg reset;
	reg IL;
	reg [15:0] IR;

	// Outputs
	wire [15:12] opcode;
	wire [11:8] DA;
	wire [7:4] AA;
	wire [3:0] BA;

	// Instantiate the Unit Under Test (UUT)
	instructionRegister uut (
		.clk(clk), 
		.reset(reset), 
		.IL(IL), 
		.IR(IR), 
		.opcode(opcode), 
		.DA(DA), 
		.AA(AA), 
		.BA(BA)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		IL = 1;
		IR = 0;
		#10;
		reset = 0;
		IR = 16'h8006;
		#20;
		IR = 16'h1234;
		

	end
		always #10 clk = ~clk;
		always #30 IL = ~IL;
      
endmodule

