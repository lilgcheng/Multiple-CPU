`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:51:47 05/12/2016 
// Design Name: 
// Module Name:    CU 
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
module CU(
		input [5 : 0] Opcode,//31-26
		input Enable,
		input Clk ,
		input Reset,
		output reg PCWriteCond, 
		output reg PCWrite,
		output reg IorD,
		output reg	MemRead,
		output reg MemWrite,
		output reg MemtoReg,
		output reg IRWrite,
		output reg ALUSrcA,
		output reg RegWrite,
		output reg RegDst,
		output reg [3 : 0] ALUOp,
		output reg [1 : 0] PCSource,
		output reg [1 : 0] ALUSrcB
    );
	
	parameter	R_Type 	= 6'b000000, 
					lw 		= 6'b100011, 
					sw 		= 6'b101011, 
					Set 		= 6'b111111,
					Addi		= 6'b001000,
					BEQ		= 6'b000100,
					JMP		= 6'b000010;
	
	/*ALUOp out*/
	parameter 	Op_lw  		= 4'b0000,
					Op_sw  		= 4'b0001,
					Op_Beq 	= 4'b0010,
					Op_Bne		= 4'b0011,
					Op_R   		= 4'b0100,
					Op_set	 	= 4'b0101,
					Op_JMP		= 4'b0110;
					
	integer state = 0;		
	
	always @( posedge Clk  ) begin
		if (Enable) begin
		
			if( Reset == 1 ) begin
					PCWriteCond	 <= 0;
					PCWrite 		<= 0;
					IorD 				<= 0;
					MemRead 		<= 0;
					MemWrite 		<= 0;
					MemtoReg		<= 0;
					IRWrite			<= 0;
					PCSource		<= 2'b00;
					ALUOp 			<= Op_sw;
					ALUSrcA 		<= 0;
					ALUSrcB 		<= 2'b01;
					RegWrite 		<= 0;
					RegDst			<= 0;
					state 			<= 1;
			end
			
			if(state == 1 && Reset == 0) begin/* 指令擷取步驟 (PC + 4) */
				PCWriteCond 	<= 0;
				PCWrite 		<= 1;
				IorD 				<= 0;
				MemRead 		<= 1;
				MemWrite 		<= 0;
				MemtoReg		<= 0;
				IRWrite			<= 1;
				PCSource		<= 2'b00;
				ALUOp 			<= Op_lw;//0000 => add
				ALUSrcA 		<= 0;
				ALUSrcB 		<= 2'b01;
				RegWrite 		<= 0;
				RegDst			<= 0;
				state 			<= 2;
			end
			
			if(state == 2)begin/* 指令解碼與暫存器擷取 */
				PCWriteCond 	<= 0;
				PCWrite 		<= 0;
				IorD 				<= 0;
				MemRead 		<= 0;
				MemWrite 		<= 0;
				MemtoReg		<= 0;
				IRWrite			<= 0;
				PCSource		<= 2'b00;
				ALUOp 			<= Op_lw;
				ALUSrcA 		<= 0;
				ALUSrcB 		<= 2'b11;
				RegWrite 		<= 0;
				RegDst			<= 0;
				state 			<= 3;
				
			end
				
			if(state == 3) begin//EX
				case( Opcode )
					Set: begin
						PCWriteCond 	<= 0;
						PCWrite 		<= 0;
						IorD 				<= 0;
						MemRead 		<= 0;
						MemWrite 		<= 0;
						MemtoReg		<= 0;
						IRWrite			<= 0;
						PCSource		<= 2'b00;
						ALUOp 			<= Op_lw;
						ALUSrcA 		<= 1;
						ALUSrcB 		<= 2'b10;
						RegWrite 		<= 0;
						RegDst			<= 0;
						state 			<= 5;
					end
						
					R_Type: begin//R-type
						PCWriteCond 	<= 0;
						PCWrite 		<= 0;
						IorD 				<= 0;
						MemRead 		<= 0;
						MemWrite 		<= 0;
						MemtoReg		<= 0;
						IRWrite			<= 0;
						PCSource		<= 2'b00;
						ALUOp 			<= Op_R;
						ALUSrcA 		<= 1;
						ALUSrcB 		<= 2'b00;
						RegWrite 		<= 0;
						RegDst			<= 0;
						state 			<= 6;
					end
					
					sw: begin//sw
						PCWriteCond 	<= 0;
						PCWrite 		<= 0;
						IorD 				<= 0;
						MemRead 		<= 0;
						MemWrite 		<= 0;
						MemtoReg		<= 0;
						IRWrite			<= 0;
						PCSource		<= 2'b00;
						ALUOp 			<= Op_lw;
						ALUSrcA 		<= 1;
						ALUSrcB 		<= 2'b10;
						RegWrite 		<= 0;
						RegDst			<= 0;
						state 			<= 4;
					end
					
					lw: begin//lw
						PCWriteCond 	<= 0;
						PCWrite 		<= 0;
						IorD 				<= 0;
						MemRead 		<= 0;
						MemWrite 		<= 0;
						MemtoReg		<= 0;
						IRWrite			<= 0;
						PCSource		<= 2'b00;
						ALUOp 			<= Op_lw;
						ALUSrcA 		<= 1;
						ALUSrcB 		<= 2'b10;
						RegWrite 		<= 0;
						RegDst			<= 0;
						state 			<= 7;
					end 
					
					Addi: begin//Addi
						PCWriteCond 	<= 0;
						PCWrite 		<= 0;
						IorD 				<= 0;
						MemRead 		<= 0;
						MemWrite 		<= 0;
						MemtoReg		<= 0;
						IRWrite			<= 0;
						PCSource		<= 2'b00;
						ALUOp 			<= Op_lw;
						ALUSrcA 		<= 1;
						ALUSrcB 		<= 2'b10;
						RegWrite 		<= 0;
						RegDst			<= 0;
						state 			<= 4;
					end
					
					BEQ: begin//beq
						PCWriteCond 	<= 1;
						PCWrite 		<= 1;
						IorD 				<= 0;
						MemRead 		<= 1;
						MemWrite 		<= 0;
						MemtoReg		<= 0;
						IRWrite			<= 0;
						PCSource		<= 2'b01;
						ALUOp 			<= Op_Beq;
						ALUSrcA 		<= 1;
						ALUSrcB 		<= 2'b00;
						RegWrite 		<= 0;
						RegDst			<= 0;
						state 			<= 1;
					end
					
					JMP: begin
						PCWriteCond 	<= 1;
						PCWrite 		<= 1;
						IorD 				<= 0;
						MemRead 		<= 1;
						MemWrite 		<= 0;
						MemtoReg		<= 0;
						IRWrite			<= 0;
						PCSource		<= 2'b10;
						ALUOp 			<= Op_JMP;
						ALUSrcA 		<= 1;
						ALUSrcB 		<= 2'b00;
						RegWrite 		<= 0;
						RegDst			<= 0;
						state 			<= 1;
					end
					
					default: begin 
					end
				endcase
			end	
			if(state == 4) begin//sw
				PCWriteCond 	<= 0;
				PCWrite 		<= 0;
				IorD 				<= 1;
				MemRead 		<= 0;
				MemWrite 		<= 1;
				MemtoReg		<= 0;
				IRWrite			<= 0;
				PCSource		<= 2'b00;
				ALUOp 			<= Op_sw;
				ALUSrcA 		<= 1;
				ALUSrcB 		<= 2'b10;
				RegWrite 		<= 1;
				RegDst			<= 0;
				state 			<= 5;
			end
			if(state == 5) begin//Store
				PCWriteCond 	<= 0;
				PCWrite 		<= 0;
				IorD 				<= 1;
				MemRead 		<= 0;
				MemWrite 		<= 1;
				MemtoReg		<= 0;
				IRWrite			<= 0;
				PCSource		<= 2'b00;
				ALUOp 			<= Op_lw;
				ALUSrcA 		<= 0;
				ALUSrcB 		<= 2'b01;
				RegWrite 		<= 1;
				RegDst			<= 0;
				state 			<= 1;
			end
			
			if(state == 6) begin //WB Register Writeback
				PCWriteCond 	<= 0;
				PCWrite 		<= 0;
				IorD 				<= 0;
				MemRead 		<= 0;
				MemWrite 		<= 0;
				MemtoReg		<= 0;
				IRWrite			<= 0;
				PCSource		<= 2'b00;
				ALUOp 			<= Op_R;
				ALUSrcA 		<= 1;
				ALUSrcB 		<= 2'b00;
				RegWrite 		<= 0;
				RegDst			<= 1;
				state 			<= 5;
			end
			
			if(state == 7) begin //
				PCWriteCond 	<= 0;
				PCWrite 		<= 0;
				IorD 				<= 1;
				MemRead 		<= 1;
				MemWrite 		<= 0;
				MemtoReg		<= 1;
				IRWrite			<= 0;
				PCSource		<= 2'b00;
				ALUOp 			<= Op_lw;
				ALUSrcA 		<= 1;
				ALUSrcB 		<= 2'b00;
				RegWrite 		<= 0;
				RegDst			<= 0;
				state 			<= 5;
			end
		end	
	end
endmodule
