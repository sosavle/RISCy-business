`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:39:27 11/15/2020
// Design Name:   registerFile
// Module Name:   C:/Users/sosav/Downloads/ECE414_Project_Files_2020/FinalProject/tb_registerFile.v
// Project Name:  FinalProject
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: registerFile
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_registerFile;

	// Inputs
	reg clk;
	reg reset;
	reg [3:0] DA;
	reg [15:0] D;
	reg [3:0] AA;
	reg [3:0] BA;
	reg RW;

	// Outputs
	wire [15:0] Aout;
	wire [15:0] Bout;

	// Instantiate the Unit Under Test (UUT)
	registerFile uut (
		.clk(clk), 
		.reset(reset), 
		.DA(DA), 
		.D(D), 
		.AA(AA), 
		.BA(BA), 
		.RW(RW), 
		.Aout(Aout), 
		.Bout(Bout)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		reset = 1;
		DA = 0;
		D = 2;
		AA = 0;
		BA = 0;
		RW = 1;
		#10;
      reset = 0;
	end
	
	always #10 begin
		AA = AA + 1;
		BA = BA - 1;
		DA = DA + 1;
		D = D + 2;
		clk = ~clk;
	end
      
endmodule

