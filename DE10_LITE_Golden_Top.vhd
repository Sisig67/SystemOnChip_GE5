-- INSA Strasbourg
-- Projet RFS2-CAO microélectronique
-- Vincent Frick
-- Mise à jour du 12/09/2025

-- déclaration des bibliothèques
library ieee;
use ieee.std_logic_1164.all;

-- déclaration d'entité (composant)
entity DE10_LITE_Golden_Top is

port(
		------------ ADC CLOCK: 3.3-V LVTTL ----------
	ADC_CLK_10 : in std_logic;
	
	------------ CLOCK 1: 3.3-V LVTTL ----------
	MAX10_CLK1_50 : in std_logic;

	------------ CLOCK 2: 3.3-V LVTTL ----------
	MAX10_CLK2_50 : in std_logic;

	------------ SDRAM: 3.3-V LVTTL ----------
	DRAM_ADDR : out std_logic_vector(12 downto 0);
	DRAM_BA : out std_logic_vector(1 downto 0);
	DRAM_CAS_N : out std_logic;
	DRAM_CKE : out std_logic;
	DRAM_CLK : out std_logic;
	DRAM_CS_N : out std_logic;
	DRAM_DQ : inout std_logic_vector(15 downto 0);
	DRAM_LDQM : out	std_logic;
	DRAM_RAS_N : out std_logic;
	DRAM_UDQM : out std_logic;
	DRAM_WE_N : out std_logic;

	------------ SEG7: 3.3-V LVTTL ----------
	HEX0 : out std_logic_vector(7 downto 0);
	HEX1 : out std_logic_vector(7 downto 0);
	HEX2 : out std_logic_vector(7 downto 0);
	HEX3 : out std_logic_vector(7 downto 0);
	HEX4 : out std_logic_vector(7 downto 0);
	HEX5 : out std_logic_vector(7 downto 0);

	------------ KEY: 3.3 V SCHMITT TRIGGER ----------
	KEY : in std_logic_vector(1 downto 0);

	------------ LED: 3.3-V LVTTL ----------
	LEDR : out std_logic_vector(9 downto 0);

	------------ SW: 3.3-V LVTTL ----------
	SW : in std_logic_vector(9 downto 0);

	------------ VGA: 3.3-V LVTTL ---------- Not used in this project (?)
	VGA_B : out std_logic_vector(3 downto 0);
	VGA_G : out std_logic_vector(3 downto 0);
	VGA_HS : out std_logic;
	VGA_R : out std_logic_vector(3 downto 0);
	VGA_VS : out std_logic;

	------------ DE10-Lite board Accelerometer: 3.3-V LVTTL ---------- Not used in this project (?)
	GSENSOR_CS_N : out std_logic;
	GSENSOR_INT : in  std_logic_vector(2 downto 1);
	GSENSOR_SCLK : out std_logic;
	GSENSOR_SDI : inout std_logic;
	GSENSOR_SDO : inout std_logic;

	------------ Arduin std_logico: 3.3-V LVTTL ----------
	ARDUINO_IO : inout std_logic_vector(15 downto 0);
	ARDUINO_RESET_N : inout std_logic;

	------------ GPIO, GPIO connect to GPIO Default: 3.3-V LVTTL ----------
	GPIO : inout std_logic_vector(35 downto 0)
);
end DE10_LITE_Golden_Top;

-- déclaration d'architecture
architecture struct of DE10_LITE_Golden_Top is

	component NIOS_RFS2 is
		port (
			clk_clk       : in std_logic := 'X'; -- clk
			reset_reset_n : in std_logic := 'X'  -- reset_n
		);
	end component NIOS_RFS2;

	component pll2
		PORT
			(
				inclk0		: IN STD_LOGIC  := '0';
				c0		: OUT STD_LOGIC 
			);
	end component;

	signal clk_75 : std_logic;

begin
	--
	u0 : component NIOS_RFS2
		port map (
			clk_clk       => clk_75,       --   clk.clk
			reset_reset_n => KEY(0)  -- reset.reset_n
		);
		
	U1 : component pll2	
		port map(
					inclk0 => MAX10_CLK1_50,
					c0 => clk_75
				);

		GPIO <= (others=>'Z');
		
		HEX0 <= (others => '1');
		HEX1 <= (others => '1');
		HEX2 <= (others => '1');
		HEX3 <= (others => '1');
		HEX4 <= (others => '1');
		HEX5 <= (others => '1');
		
		VGA_B <= (others=>'Z');
		VGA_G <= (others=>'Z');
		VGA_HS <= 'Z';
		VGA_R <= (others=>'Z');
		VGA_VS <= 'Z';

		GSENSOR_CS_N <= 'Z';
		GSENSOR_SCLK <= 'Z';
		GSENSOR_SDI <= 'Z';
		GSENSOR_SDO <= 'Z';

		ARDUINO_IO <= (others=>'Z');
		ARDUINO_RESET_N <= 'Z';

end struct;
