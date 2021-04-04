//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "pacman -Qqu | wc -l", 60, 0},
	{"墳 ", "printf '%d%%' `pamixer --get-volume`", 5, 10},
	{" ", "date '+%b %d %H:%M'", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
