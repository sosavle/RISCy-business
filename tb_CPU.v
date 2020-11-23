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

	reg [15:0] instructions [38:0];
	reg [15:0] mem [63:0];
	integer i;
	
	initial begin
		// Initialize ROM	
		//instructions[0] = 16'h8A10; //Load 16 into r10
		//instructions[1] = 16'h91AF; //Load M[[R10]] = 32 into R1
		//instructions[2] = 16'hAFA0; //Save R0 = 0 into M[R10] = 16
		
		instructions[0] = 16'h8000;
		instructions[1] = 16'h8101;
		instructions[2] = 16'h8201;
		instructions[3] = 16'h8307;
		instructions[4] = 16'h8405;
		instructions[5] = 16'hD501;
		instructions[6] = 16'hE01A;
		instructions[7] = 16'h3630;
		instructions[8] = 16'h3740;
		instructions[9] = 16'h3800;
		instructions[10] = 16'h3901;
		instructions[11] = 16'h8A02;
		instructions[12] = 16'h8B40;
		instructions[13] = 16'h0CBB;
		instructions[14] = 16'hDF00;
		instructions[15] = 16'h6BB0;
		instructions[16] = 16'h7CC0;
		instructions[17] = 16'hCC01;
		instructions[18] = 16'hE001;
		instructions[19] = 16'hF0F0;
		instructions[20] = 16'hDF00;
		instructions[21] = 16'h2C79;
		instructions[22] = 16'hBC01;
		instructions[23] = 16'h0886;
		instructions[24] = 16'h2C89;
		instructions[25] = 16'h7880;
		instructions[26] = 16'h7770;
		instructions[27] = 16'h6AA0;
		instructions[28] = 16'hBC01;
		instructions[29] = 16'h377B;
		instructions[30] = 16'hBA01;
		instructions[31] = 16'hF0F0;
		instructions[32] = 16'hF050;
		instructions[33] = 16'h8F0F;
		instructions[34] = 16'hA0F7;
		instructions[35] = 16'h9DF0;
		instructions[36] = 16'h1ED1;
		instructions[37] = 16'hA00E;
		instructions[38] = 16'hFF00;
		
		// Initialize RAM
		for(i=0; i<64; i=i+1) begin
			mem[i] <= 2*i; // Initialize memory addresses with twice their index value
		end
		
		reset = 1;
		clk = 1;
		# 140;
		reset = 0; 
		
		
		// Multiply r3 and r4, store results
		
		// r0 = 0
		// r1 = 1
		// r2 = 1
		// r3 = 7
		// r4 = 5

	end
	
	
	always #10 clk = ~clk;
	always @(address_to_rom) 
		data_from_rom = instructions[address_to_rom];
	assign data_ram = read_enable_to_ram? mem[address_to_ram]: 16'hZZZZ;
	
	always @(clk) begin
		if(write_enable_to_ram == 1) begin
			mem[address_to_ram] <= data_ram;
		end
	end

      
endmodule

