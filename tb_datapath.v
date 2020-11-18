`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:22:29 11/16/2020
// Design Name:   cpuDatapath
// Module Name:   C:/Users/sosav/Downloads/ECE414_Project_Files_2020/FinalProject/tb_datapath.v
// Project Name:  FinalProject
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cpuDatapath
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_datapath;

	// Inputs
	reg clk;
	reg reset;
	reg [3:0] DA;
	reg [3:0] AA;
	reg [3:0] BA;
	reg [2:0] FS;
	reg MB;
	reg [1:0] resultSource;
	reg RW;
	reg [15:0] MemIn;
	reg [15:0] PC;

	// Outputs
	wire [15:0] Dout;
	wire MemAddr;

	// Instantiate the Unit Under Test (UUT)
	cpuDatapath uut (
		.clk(clk), 
		.reset(reset), 
		.DA(DA), 
		.AA(AA), 
		.BA(BA), 
		.FS(FS), 
		.MB(MB), 
		.resultSource(resultSource), 
		.RW(RW),  
		.MemIn(MemIn), 
		.PC(PC), 
		.Dout(Dout), 
		.MemAddr(MemAddr)
	);

	initial begin
		// Initialize Inputs
		reset = 1;
		clk = 1;
		RW = 1;
		DA = 0;
		AA = 0;
		BA = 0;
		FS = 0;
		MB = 0;
		resultSource = 0;
		MemIn = 0;
		PC = 0;
		#10;
		reset = 0;
		DA = 3;
		AA = 1;
		BA = 2;
		FS = 0;
		MB = 0;
		resultSource = 0;
		MemIn = 0;
		PC = 15;	
		#20;
		DA = 3;
		AA = 3;
		BA = 3;
 
	end
	
	always #10 clk = ~clk;
	always #20 RW = ~RW;
	
      
endmodule

//EMIT POSITIVE SAVE NEGATIVE
