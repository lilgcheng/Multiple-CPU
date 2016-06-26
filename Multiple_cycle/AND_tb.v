`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:17:33 05/16/2016
// Design Name:   AND
// Module Name:   C:/Verliog_practice/Multiple_cycle/AND_tb.v
// Project Name:  Multiple_cycle
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: AND
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module AND_tb;

	// Inputs
	reg A;
	reg B;

	// Outputs
	wire OR_OUT;

	// Instantiate the Unit Under Test (UUT)
	AND uut (
		.A(A), 
		.B(B), 
		.OR_OUT(OR_OUT)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
        A = 0;
		B = 1;

		// Wait 100 ns for global reset to finish
		#100;
        A = 1;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
        A = 1;
		B = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

