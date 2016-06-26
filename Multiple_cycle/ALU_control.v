`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:24:33 05/11/2016 
// Design Name: 
// Module Name:    ALU_control 
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
module ALU_control(
		//ALUOp port
		input [3 : 0 ] ALUOp,
		//function code port
		input [ 5 : 0 ] FunCode,
		//ALU control port
		output reg [ 3 : 0 ] AC_OUT
    );

	 /*ALUOp for ALU control*/
	parameter 	Op_lw  	= 4'b0000,
					Op_sw  	= 4'b0001,
					Op_Beq = 4'b0010,
					Op_Bne	= 4'b0011,
					Op_R   	= 4'b0100,//R -type
					Op_set 	= 4'b0101,
					Op_JMP	= 4'b0110;
					
	 /*R type 6bit*/
	 parameter R_ADD	= 6'b100000,//32
					R_SUB	= 6'b100010,//34
					R_AND	= 6'b100100,//36
					R_OR		= 6'b100101,//37
					R_NOR	= 6'b100111,//39
					R_XOR	= 6'b100110;//38
	
	/*output for ALU*/
	parameter	AC_ADD =	4'b0000,
					AC_SUB	=	4'b0001,
					AC_AND	=	4'b0010,
					AC_OR	=	4'b0011,
					AC_XOR =	4'b0100,
					AC_BEQ	=  4'b0101,
					
					AC_SET	=	4'b1110,
					AC_ERR	=	4'b1111;
					
	always @( ALUOp, FunCode ) begin
		if ( ALUOp == Op_R ) begin
			case (FunCode)
				R_ADD : AC_OUT <= AC_ADD;		// add
				R_SUB : AC_OUT <= AC_SUB;		// sub
				R_AND : AC_OUT <= AC_AND;		// and
				R_OR : AC_OUT<= AC_OR;		// or
				R_XOR : AC_OUT <= AC_XOR;//xor
				
				default: AC_OUT <= AC_ERR; // should not happen
			endcase
		end
		
		else begin
			case (ALUOp)
				Op_lw  	 	: AC_OUT <= AC_ADD;
				Op_sw   	: AC_OUT <= AC_ADD;
				Op_Beq 	: AC_OUT <= AC_BEQ;
				Op_Bne		: AC_OUT <= AC_ERR;
				Op_set		: AC_OUT <= AC_SET;
				Op_JMP		: AC_OUT <= AC_ADD;
				default: AC_OUT <= AC_ERR; // should not happen
			endcase
		end
	end

endmodule
