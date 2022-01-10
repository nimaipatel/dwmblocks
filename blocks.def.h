//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/              /*Update Interval*/  /*Update Signal*/
	{"",          "/usr/local/share/dwmblocks/sb_battery",   5,   3},
	{"",           "/usr/local/share/dwmblocks/sb_volume",   0,  10},
	{"",       "/usr/local/share/dwmblocks/sb_brightness",   0,  19},
	{"",           "/usr/local/share/dwmblocks/sb_memory",  10,  14},
	{"",         "/usr/local/share/dwmblocks/sb_cpu_bars",  10,  18},
	{"",         "/usr/local/share/dwmblocks/sb_cpu_temp",  10,  18},
	{"",  "/usr/local/share/dwmblocks/sb_network_traffic",   1,  16},
	{"",             "/usr/local/share/dwmblocks/sb_wifi",   5,   4},
	{"",         "/usr/local/share/dwmblocks/sb_ethernet",   5,   4},
	{"",            "/usr/local/share/dwmblocks/sb_clock",  60,   1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
