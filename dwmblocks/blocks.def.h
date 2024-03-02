//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"M ", "/home/tawargy/bin/dwmblocks_scripts/memory",	     6,		              1},
	{"🔊 ", "/home/tawargy/bin/dwmblocks_scripts/volume",     0,		              10},
	{"📦 ", "/home/tawargy/bin/dwmblocks_scripts/update",     360, 		          9},
	{"", "/home/tawargy/bin/dwmblocks_scripts/clock",	       60,	              0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "| ";
static unsigned int delimLen = 5;
