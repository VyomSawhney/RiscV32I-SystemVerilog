module alu_tb;
    logic [31:0] operand_a;
    logic [31:0] operand_b;
    logic [3:0] alu_op;
    logic [31:0] result;
    int pass_count = 0;
    int fail_count = 0;
    alu dut(
    .operand_a(operand_a),
    .operand_b(operand_b),
    .alu_op(alu_op),
    .result(result)
    );


    task automatic alu_auto(
        input logic [3:0] op,
        input logic [31:0] a,
        input logic [31:0] b,
        input logic [31:0] expected
    );
        logic [31:0] result_out;

        alu_op = op;
        operand_a = a;
        operand_b = b;

        #1;

        result_out = result;

        if (result_out !== expected) begin
            $display("ALU Test Failed: alu_op=%b, operand_a=%h, operand_b=%h, expected_result=%h, got_result=%h",
                    op, a, b, expected, result_out);
            fail_count++;
        end else begin
            pass_count++;
        end
    endtask
    
    initial begin
        int N = 1000;
        for (int i = 0; i < N; i++) begin
            logic [31:0] a;
            logic [31:0] b;
            a = $urandom();
            b = $urandom();

            alu_auto(4'b0000, a, b, a + b); // ADD
            alu_auto(4'b0001, a, b, a - b); // SUB
            alu_auto(4'b0010, a, b, a & b); // AND
            alu_auto(4'b0011, a, b, a | b); // OR
            alu_auto(4'b0100, a, b, a ^ b); // XOR
            alu_auto(4'b0101, a, b, a << b[4:0]); // SLL
            alu_auto(4'b0110, a, b, a >> b[4:0]); // SRL
            alu_auto(4'b0111, a, b, $signed(a) >>> b[4:0]); // SRA
            alu_auto(4'b1000, a, b, ($signed(a) < $signed(b)) ? 32'b1 : 32'b0); // SLT
            alu_auto(4'b1001, a, b, (a < b) ? 32'b1 : 32'b0); // SLTU
            alu_auto(4'b1010, a, b, 32'b0); // Unused operation code
            alu_auto(4'b1011, a, b, 32'b0); // Unused operation code
            alu_auto(4'b1100, a, b, 32'b0); // Unused operation code
            alu_auto(4'b1101, a, b, 32'b0); // Unused operation code
            alu_auto(4'b1110, a, b, 32'b0); // Unused operation code
            alu_auto(4'b1111, a, b, 32'b0); // Default case
        end

        //edge case: all zeros
        alu_auto(4'b0000, 32'b0, 32'b0, 32'b0); // ADD
        alu_auto(4'b0001, 32'b0, 32'b0, 32'b0); // SUB
        alu_auto(4'b0010, 32'b0, 32'b0, 32'b0); // AND
        alu_auto(4'b0011, 32'b0, 32'b0, 32'b0); // OR
        alu_auto(4'b0100, 32'b0, 32'b0, 32'b0); // XOR
        alu_auto(4'b0101, 32'b0, 32'b0, 32'b0); // SLL
        alu_auto(4'b0110, 32'b0, 32'b0, 32'b0); // SRL
        alu_auto(4'b0111, 32'b0, 32'b0, 32'b0); // SRA
        alu_auto(4'b1000, 32'b0, 32'b0, 32'b0); // SLT
        alu_auto(4'b1001, 32'b0, 32'b0, 32'b0); // SLTU
        alu_auto(4'b1010, 32'b0, 32'b0, 32'b0); // Unused operation code
        alu_auto(4'b1011, 32'b0, 32'b0, 32'b0); // Unused operation code
        alu_auto(4'b1100, 32'b0, 32'b0, 32'b0); // Unused operation code
        alu_auto(4'b1101, 32'b0, 32'b0, 32'b0); // Unused operation code
        alu_auto(4'b1110, 32'b0, 32'b0, 32'b0); // Unused operation code
        alu_auto(4'b1111, 32'b0, 32'b0, 32'b0); // Default case 

        //edge case: all ones
        alu_auto(4'b0000, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'hFFFFFFFE); // ADD
        alu_auto(4'b0001, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'b0); // SUB
        alu_auto(4'b0010, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'hFFFFFFFF); // AND
        alu_auto(4'b0011, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'hFFFFFFFF); // OR
        alu_auto(4'b0100, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'b0); // XOR
        alu_auto(4'b0101, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'h80000000); // SLL
        alu_auto(4'b0110, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'h00000001); // SRL
        alu_auto(4'b0111, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'hFFFFFFFF); // SRA
        alu_auto(4'b1000, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'b0); // SLT
        alu_auto(4'b1001, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'b0); // SLTU
        alu_auto(4'b1010, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'b0); // Unused operation code
        alu_auto(4'b1011, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'b0); // Unused operation code
        alu_auto(4'b1100, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'b0); // Unused operation code
        alu_auto(4'b1101, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'b0); // Unused operation code
        alu_auto(4'b1110, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'b0); // Unused operation code
        alu_auto(4'b1111, 32'hFFFFFFFF, 32'hFFFFFFFF, 32'b0); // Default case 

        //edge case: wrapping arithmatic
        alu_auto(4'b0000, 32'hFFFFFFFF, 32'h1, 32'b0); // ADD
        alu_auto(4'b0001, 32'h0, 32'h1, 32'hFFFFFFFF); // SUB
        alu_auto(4'b0010, 32'hFFFFFFFF, 32'h1, 32'h00000001); // AND
        alu_auto(4'b0011, 32'hFFFFFFFF, 32'h1, 32'hFFFFFFFF); // OR
        alu_auto(4'b0100, 32'hFFFFFFFF, 32'h1, 32'hFFFFFFFE); // XOR
        alu_auto(4'b0101, 32'hFFFFFFFF, 32'h1, 32'hFFFFFFFE); // SLL
        alu_auto(4'b0110, 32'hFFFFFFFF, 32'h1, 32'h7FFFFFFF); // SRL
        alu_auto(4'b0111, 32'hFFFFFFFF, 32'h1, 32'hFFFFFFFF); // SRA
        alu_auto(4'b1000, 32'hFFFFFFFF, 32'h1, 32'h00000001); // SLT
        alu_auto(4'b1001, 32'hFFFFFFFF, 32'h1, 32'b0); // SLTU
        alu_auto(4'b1010, 32'hFFFFFFFF, 32'h1, 32'b0); // Unused operation code
        alu_auto(4'b1011, 32'hFFFFFFFF, 32'h1, 32'b0); // Unused operation code
        alu_auto(4'b1100, 32'hFFFFFFFF, 32'h1, 32'b0); // Unused operation code
        alu_auto(4'b1101, 32'hFFFFFFFF, 32'h1, 32'b0); // Unused operation code
        alu_auto(4'b1110, 32'hFFFFFFFF, 32'h1, 32'b0); // Unused operation code
        alu_auto(4'b1111, 32'hFFFFFFFF, 32'h1, 32'b0); // Default case

        //edge case: signed versus unsigned comparisons
        alu_auto(4'b1000, 32'hFFFFFFFF, 32'h00000001, 32'b1); // SLT: -1 < 1
        alu_auto(4'b1001, 32'hFFFFFFFF, 32'h00000001, 32'b0); // SLTU: 0xFFFFFFFF > 1
        alu_auto(4'b1000, 32'h00000001, 32'hFFFFFFFF, 32'b0); // SLT: 1 > -1
        alu_auto(4'b1001, 32'h00000001, 32'hFFFFFFFF, 32'b1); // SLTU: 1 < 0xFFFFFFFF

        //edge case: sign extension
        alu_auto(4'b0000, 32'h80000000, 32'h80000000, 32'h00000000); // ADD
        alu_auto(4'b0001, 32'h80000000, 32'h80000000, 32'h00000000); // SUB
        alu_auto(4'b0010, 32'h80000000, 32'h80000000, 32'h80000000); // AND
        alu_auto(4'b0011, 32'h80000000, 32'h80000000, 32'h80000000); // OR
        alu_auto(4'b0100, 32'h80000000, 32'h80000000, 32'h00000000); // XOR
        alu_auto(4'b0101, 32'h80000000, 32'h80000000, 32'h80000000); // SLL
        alu_auto(4'b0110, 32'h80000000, 32'h80000000, 32'h80000000); // SRL
        alu_auto(4'b0111, 32'h80000000, 32'h80000000, 32'h80000000); // SRA
        alu_auto(4'b0101, 32'h80000000, 32'd1, 32'h00000000); // SLL
        alu_auto(4'b0110, 32'h80000000, 32'd1, 32'h40000000); // SRL
        alu_auto(4'b0111, 32'h80000000, 32'd1, 32'hC0000000); // SRA
        alu_auto(4'b0110, 32'h80000000, 32'd31, 32'h00000001); // SRL
        alu_auto(4'b0111, 32'h80000000, 32'd31, 32'hFFFFFFFF); // SRA
        alu_auto(4'b1000, 32'h80000000, 32'h80000000, 32'b0); // SLT
        alu_auto(4'b1001, 32'h80000000, 32'h80000000, 32'b0); // SLTU
        alu_auto(4'b1010, 32'h80000000, 32'h80000000, 32'b0); // Unused operation code
        alu_auto(4'b1011, 32'h80000000, 32'h80000000, 32'b0); // Unused operation code
        alu_auto(4'b1100, 32'h80000000, 32'h80000000, 32'b0); // Unused operation code
        alu_auto(4'b1101, 32'h80000000, 32'h80000000, 32'b0); // Unused operation code
        alu_auto(4'b1110, 32'h80000000, 32'h80000000, 32'b0); // Unused operation code
        alu_auto(4'b1111, 32'h80000000, 32'h80000000, 32'b0); // Default case

        //edge case: shift 0-31
        for (int shift = 0; shift < 32; shift++) begin
            alu_auto(4'b0101, 32'hFFFFFFFF, shift, 32'hFFFFFFFF << shift); // SLL
            alu_auto(4'b0110, 32'hFFFFFFFF, shift, 32'hFFFFFFFF >> shift); // SRL
            alu_auto(4'b0111, 32'hFFFFFFFF, shift, $signed(32'hFFFFFFFF) >>> shift); // SRA
        end
        alu_auto(4'b0101, 32'h80000001, 32'd32, 32'h80000001); // SLL shift amount masked to zero
        alu_auto(4'b0110, 32'h80000001, 32'd32, 32'h80000001); // SRL shift amount masked to zero
        alu_auto(4'b0111, 32'h80000001, 32'd32, 32'h80000001); // SRA shift amount masked to zero

        $display("pass count: %0d, fail count: %0d", pass_count, fail_count);
        if (fail_count == 0) begin
            $finish;
        end else begin
            $fatal;
        end
    end
endmodule
