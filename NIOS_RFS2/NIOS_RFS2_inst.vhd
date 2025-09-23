	component NIOS_RFS2 is
		port (
			clk_clk         : in  std_logic                    := 'X'; -- clk
			reset_reset_n   : in  std_logic                    := 'X'; -- reset_n
			led_nios_export : out std_logic_vector(9 downto 0)         -- export
		);
	end component NIOS_RFS2;

	u0 : component NIOS_RFS2
		port map (
			clk_clk         => CONNECTED_TO_clk_clk,         --      clk.clk
			reset_reset_n   => CONNECTED_TO_reset_reset_n,   --    reset.reset_n
			led_nios_export => CONNECTED_TO_led_nios_export  -- led_nios.export
		);

