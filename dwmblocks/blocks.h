//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	
	{"","scripts/sb/sb-cpu", 5, 0},
	{"","scripts/sb/sb-cpu-temp", 10,	0}, 
  	{"","scripts/sb/sb-memory",10,0},
    {"","scripts/sb/sb-brightness", 0, 17},
    {"","scripts/sb/sb-up", 9000, 0},
    {"","scripts/sb/sb-volume", 0, 10},
    {"","scripts/sb/sb-internet", 15, 0},
	{"","scripts/sb/sb-battery", 5, 3}, 
    {"","scripts/sb/sb-key",5,13},
    {"","scripts/sb/sb-clock",60,0}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
