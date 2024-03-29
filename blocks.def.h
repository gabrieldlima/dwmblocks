#define PATH(name) "/home/gabriel/.local/src/dwmblocks/scripts/"name

// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/    /*Update Interval*/ /*Update Signal*/
    {" ",    PATH("kernel"),   600,                 0},
    {"",     PATH("cpu"),      1,                   0},
    {"",     PATH("memory"),   1,                   0},
    {"",     PATH("date"),     60,                  0},
    {"",     PATH("clock"),    60,                  0},
};

// Sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
