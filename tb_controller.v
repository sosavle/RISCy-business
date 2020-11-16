`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:39:57 11/15/2020
// Design Name:   cpuController
// Module Name:   C:/Users/sosav/Downloads/ECE414_Project_Files_2020/FinalProject/tb_controller.v
// Project Name:  FinalProject
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cpuController
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_controller;

	// Inputs
	reg clk;
	reg reset;
	reg [15:0] D;
	reg [15:0] IR;

	// Outputs
	wire [15:0] PC;
	wire [3:0] DA;
	wire [3:0] AA;
	wire [3:0] BA;
	wire [2:0] FS;
	wire MB;
	wire MD;
	wire RW;
	wire MW;
	wire BL;

	// Instantiate the Unit Under Test (UUT)
	cpuController uut (
		.clk(clk), 
		.reset(reset), 
		.D(D), 
		.IR(IR), 
		.PC(PC), 
		.DA(DA), 
		.AA(AA), 
		.BA(BA), 
		.FS(FS), 
		.MB(MB), 
		.MD(MD), 
		.RW(RW), 
		.MW(MW), 
		.BL(BL)
	);

	initial begin
		// Initialize Inputs
		reset = 1;
		clk = 1;
		D = 0;
		IR = 0;
		#10
		reset = 0;
		IR = 16'h8006;

        
		// Add stimulus here

	end
	
	always #10 clk = ~clk;
      
endmodule

