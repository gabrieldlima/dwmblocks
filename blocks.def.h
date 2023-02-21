// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/    /*Update Interval*/ /*Update Signal*/
    {" ",    "sb-kernel",   600,                 0},
    {"",     "sb-cpu",      1,                   0},
    {"",     "sb-memory",   1,                   0},
    {"",     "sb-date",     60,                  0},
    {"",     "sb-clock",    60,                  0},
};

// Sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
