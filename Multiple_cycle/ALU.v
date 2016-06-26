`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:54:07 05/11/2016 
// Design Name: 
// Module Name:    ALU 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ALU(
		//ALU control
		input [3 : 0] ALUctrl,
		//data input port
		input [31 : 0] A,
		input [31 : 0] B,
		//ALU data output port
		output reg [31 : 0] ALUOut,
		//ALU zero port
		output reg Zero
    );
	
	/*ALU control  for ALU input  ALUctrl*/
	parameter	AC_ADD =	4'b0000,
					AC_SUB	=	4'b0001,
					AC_AND	=	4'b0010,
					AC_OR	=	4'b0011,
					AC_XOR =	4'b0100,
					AC_BEQ =  4'b0101,
					
					
					AC_SET	=	4'b1110,
					AC_ERR	=	4'b1111;
					
					
	always @(ALUctrl, A, B) begin //reevaluate if these change
		case (ALUctrl)
			AC_ADD: ALUOut <= A + B;//add
			AC_SUB: ALUOut <= A + (~B + 1);//subtract
			AC_AND: ALUOut <= A & B;//and
			AC_OR: ALUOut <= A | B;//or
			AC_XOR : ALUOut <= A^B;//xor
			AC_SET : ALUOut <= B;
			AC_BEQ :
				if(A-B ==0) begin
					Zero <=1;	
				end
				else begin
					Zero <=0;
				end
			default: ALUOut <= 0;
		endcase
	end
			
	always @(ALUOut) begin
		if (ALUOut == 0) begin
			Zero <= 1;
		end else begin
			Zero <= 0;
		end		
	end
endmodule
