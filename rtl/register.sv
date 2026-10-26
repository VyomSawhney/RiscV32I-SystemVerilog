module register (
    input logic clk,
    input logic [4:0] rs1,
    input logic [4:0] rs2,
    input logic write_en,
    input logic [4:0] rd,
    input logic [31:0] write_data,
    output logic [31:0] rout1,
    output logic [31:0] rout2
);

    logic [31:0] registers [31:0];


    always_comb begin
        if(rs1 == 0) begin
            rout1 = 0;
        end else begin
            rout1 = registers[rs1];
        end
        if(rs2 == 0) begin
            rout2 = registers[rs2];
        end else begin
            rout2 = registers[rs2];
        end
    end

    always_ff @(posedge clk) begin
        if(rd != 0 && write_en) begin
            registers[rd] <= write_data;
        end
    end
endmodule

