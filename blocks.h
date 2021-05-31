static const Block blocks[] = {
// Icon  Command   Update Interval   Update Signal
//{" ", "pacman -Qqu | wc -l", 60, 0},
  {" ", "echo $(($(apt list --upgradable 2>/dev/null | wc -l)-1))", 60, 0},
  {"墳 ", "vol get", 5, 10},
  {" ", "date '+%a %b %d, %H:%M'", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
