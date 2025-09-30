
module NIOS_RFS2 (
	led_nios_export,
	clk_50_in_clk_clk,
	reset_bridge_50_in_reset_reset_n,
	clk_100_in_clk_clk,
	reset_bridge_100_in_reset_reset_n,
	sdram_addr,
	sdram_ba,
	sdram_cas_n,
	sdram_cke,
	sdram_cs_n,
	sdram_dq,
	sdram_dqm,
	sdram_ras_n,
	sdram_we_n,
	bt0_export);	

	output	[9:0]	led_nios_export;
	input		clk_50_in_clk_clk;
	input		reset_bridge_50_in_reset_reset_n;
	input		clk_100_in_clk_clk;
	input		reset_bridge_100_in_reset_reset_n;
	output	[12:0]	sdram_addr;
	output	[1:0]	sdram_ba;
	output		sdram_cas_n;
	output		sdram_cke;
	output		sdram_cs_n;
	inout	[15:0]	sdram_dq;
	output	[1:0]	sdram_dqm;
	output		sdram_ras_n;
	output		sdram_we_n;
	input		bt0_export;
endmodule
