	component NIOS_RFS2 is
		port (
			led_nios_export                   : out   std_logic_vector(9 downto 0);                     -- export
			clk_50_in_clk_clk                 : in    std_logic                     := 'X';             -- clk
			reset_bridge_50_in_reset_reset_n  : in    std_logic                     := 'X';             -- reset_n
			clk_100_in_clk_clk                : in    std_logic                     := 'X';             -- clk
			reset_bridge_100_in_reset_reset_n : in    std_logic                     := 'X';             -- reset_n
			sdram_addr                        : out   std_logic_vector(12 downto 0);                    -- addr
			sdram_ba                          : out   std_logic_vector(1 downto 0);                     -- ba
			sdram_cas_n                       : out   std_logic;                                        -- cas_n
			sdram_cke                         : out   std_logic;                                        -- cke
			sdram_cs_n                        : out   std_logic;                                        -- cs_n
			sdram_dq                          : inout std_logic_vector(15 downto 0) := (others => 'X'); -- dq
			sdram_dqm                         : out   std_logic_vector(1 downto 0);                     -- dqm
			sdram_ras_n                       : out   std_logic;                                        -- ras_n
			sdram_we_n                        : out   std_logic;                                        -- we_n
			bt0_export                        : in    std_logic                     := 'X'              -- export
		);
	end component NIOS_RFS2;

	u0 : component NIOS_RFS2
		port map (
			led_nios_export                   => CONNECTED_TO_led_nios_export,                   --                  led_nios.export
			clk_50_in_clk_clk                 => CONNECTED_TO_clk_50_in_clk_clk,                 --             clk_50_in_clk.clk
			reset_bridge_50_in_reset_reset_n  => CONNECTED_TO_reset_bridge_50_in_reset_reset_n,  --  reset_bridge_50_in_reset.reset_n
			clk_100_in_clk_clk                => CONNECTED_TO_clk_100_in_clk_clk,                --            clk_100_in_clk.clk
			reset_bridge_100_in_reset_reset_n => CONNECTED_TO_reset_bridge_100_in_reset_reset_n, -- reset_bridge_100_in_reset.reset_n
			sdram_addr                        => CONNECTED_TO_sdram_addr,                        --                     sdram.addr
			sdram_ba                          => CONNECTED_TO_sdram_ba,                          --                          .ba
			sdram_cas_n                       => CONNECTED_TO_sdram_cas_n,                       --                          .cas_n
			sdram_cke                         => CONNECTED_TO_sdram_cke,                         --                          .cke
			sdram_cs_n                        => CONNECTED_TO_sdram_cs_n,                        --                          .cs_n
			sdram_dq                          => CONNECTED_TO_sdram_dq,                          --                          .dq
			sdram_dqm                         => CONNECTED_TO_sdram_dqm,                         --                          .dqm
			sdram_ras_n                       => CONNECTED_TO_sdram_ras_n,                       --                          .ras_n
			sdram_we_n                        => CONNECTED_TO_sdram_we_n,                        --                          .we_n
			bt0_export                        => CONNECTED_TO_bt0_export                         --                       bt0.export
		);

