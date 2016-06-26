`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:17:03 05/23/2016
// Design Name:   Top
// Module Name:   C:/Verliog_practice/Multiple_cycle/CPU_tb.v
// Project Name:  Multiple_cycle
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CPU_tb;

	// Inputs
	reg Enable;
	reg Clk;
	reg Reset;

	// Instantiate the Unit Under Test (UUT)
	Top uut (
		.Enable(Enable), 
		.Clk(Clk), 
		.Reset(Reset)
	);

	initial begin
		#10;
		Reset = 1;
		#10;
		Reset = 0;
		Enable = 1;
		
		#10;
		Reset = 1;
		#10;
		Reset = 0;
	end
    always #10 Clk = ~Clk;
endmodule

