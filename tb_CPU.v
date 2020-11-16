`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:24:27 11/15/2020
// Design Name:   CPU
// Module Name:   C:/Users/sosav/Downloads/ECE414_Project_Files_2020/FinalProject/tb_CPU.v
// Project Name:  FinalProject
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_CPU;

	// Inputs
	reg [15:0] data_from_rom;
	reg reset;
	reg clk;

	// Outputs
	wire [5:0] address_to_rom;
	wire enable_to_rom;
	wire write_enable_to_ram;
	wire [5:0] address_to_ram;
	wire read_enable_to_ram;
	wire enable_ram_read;

	// Bidirs
	wire [15:1] data_ram;

	// Instantiate the Unit Under Test (UUT)
	CPU uut (
		.data_from_rom(data_from_rom), 
		.reset(reset), 
		.clk(clk), 
		.data_ram(data_ram), 
		.address_to_rom(address_to_rom), 
		.enable_to_rom(enable_to_rom), 
		.write_enable_to_ram(write_enable_to_ram), 
		.address_to_ram(address_to_ram), 
		.read_enable_to_ram(read_enable_to_ram), 
		.enable_ram_read(enable_ram_read)
	);

	initial begin
		// Initialize Inputs
		data_from_rom = 0;
		reset = 1;
		clk = 1;
		# 10;
		reset = 0; 
        
		// Add stimulus here

	end
	
	always #10 clk = ~clk;
      
endmodule

