//Modify this file to change what commands output to your statusbar, and recompile using the make command.
typedef struct {
	char* icon;
	char* command;
	unsigned int interval;
	unsigned int signal;
} Block;

static const Block blocks[] = {
	/*Icon*/	/*Command*/       /*Update Interval*/	/*Update Signal*/
	{"",      "echo ''",	      0,		               0},
	{"",      "sb-player",	    15,		               12},
//	{"",      "sb-packages",	  0,		               13},
//	{"",      "sb-gym",	        900,		             7},
	{"",      "sb-news",	      0,		               5},
  {"",      "sb-mail",        15,                   14},
	{"",      "sb-brightness",  0,		               4},
	{"",      "sb-mic",	        0,		               9},
	{"",      "sb-volume",	    0,		               3},
	{"",      "sb-battery",	    60,		               6},
	{"",      "sb-network",	    30,		               10},
	{"",      "sb-cal",	        6000, 	             11},
	{"",      "sb-clock",	      45, 	               2},
	{"",      "sb-power",	      60,		               8},
	{"",      "echo ''",	      0,		               0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
