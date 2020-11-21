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
	wire [15:0] data_ram;
	
	assign data_ram = read_enable_to_ram? 69: 16'hZZZZ;

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
		reset = 1;
		clk = 1;
		# 10; // r7 = r15(15) + r5(5)
		data_from_rom = 16'h07F5;
		reset = 0; 
		# 50; // Load Word from address r3[5:0] = 3 into R0
		data_from_rom = 16'h903F;
		# 40 // Save the value of R7(20) to address in r1[5:0] = 1
		data_from_rom = 16'hAF17;
		
		
		/*
		data_from_rom = 16'h0313;
		# 40; // Save current PC to R7 and jump 20
		data_from_rom = 16'hD720;
		# 40; // Jump -2 (-1)
		data_from_rom = 16'hE0FE;
		# 40; // Return to the value stored in R7
		data_from_rom = 16'hF070;
		# 60; // End
		data_from_rom = 16'hFFFF;
		*/
		
		
		/*data_from_rom = 16'h0363;
		# 40; // Load -1 into R8
		data_from_rom = 16'h88FF;
		# 40; // Load 
		// TODO: LW
		//# 40; // Do not jump because R0 has -1
		data_from_rom = 16'hB8F0;
		# 40; // Load 0 into R8
		data_from_rom = 16'h8800;
		# 40; // Jump -16 because R8 has 0
		data_from_rom = 16'hB8F0;*/
        
		// Add stimulus here

	end
	
	always #10 clk = ~clk;
      
endmodule

