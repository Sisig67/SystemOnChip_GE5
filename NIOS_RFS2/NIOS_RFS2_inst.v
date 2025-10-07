	NIOS_RFS2 u0 (
		.bt0_export                        (<connected-to-bt0_export>),                        //                       bt0.export
		.clk_100_in_clk_clk                (<connected-to-clk_100_in_clk_clk>),                //            clk_100_in_clk.clk
		.clk_50_in_clk_clk                 (<connected-to-clk_50_in_clk_clk>),                 //             clk_50_in_clk.clk
		.i2c_scl_pad_io                    (<connected-to-i2c_scl_pad_io>),                    //                       i2c.scl_pad_io
		.i2c_sda_pad_io                    (<connected-to-i2c_sda_pad_io>),                    //                          .sda_pad_io
		.led_nios_export                   (<connected-to-led_nios_export>),                   //                  led_nios.export
		.reset_bridge_100_in_reset_reset_n (<connected-to-reset_bridge_100_in_reset_reset_n>), // reset_bridge_100_in_reset.reset_n
		.reset_bridge_50_in_reset_reset_n  (<connected-to-reset_bridge_50_in_reset_reset_n>),  //  reset_bridge_50_in_reset.reset_n
		.sdram_addr                        (<connected-to-sdram_addr>),                        //                     sdram.addr
		.sdram_ba                          (<connected-to-sdram_ba>),                          //                          .ba
		.sdram_cas_n                       (<connected-to-sdram_cas_n>),                       //                          .cas_n
		.sdram_cke                         (<connected-to-sdram_cke>),                         //                          .cke
		.sdram_cs_n                        (<connected-to-sdram_cs_n>),                        //                          .cs_n
		.sdram_dq                          (<connected-to-sdram_dq>),                          //                          .dq
		.sdram_dqm                         (<connected-to-sdram_dqm>),                         //                          .dqm
		.sdram_ras_n                       (<connected-to-sdram_ras_n>),                       //                          .ras_n
		.sdram_we_n                        (<connected-to-sdram_we_n>),                        //                          .we_n
		.rh_temp_drdy_export               (<connected-to-rh_temp_drdy_export>)                //              rh_temp_drdy.export
	);

