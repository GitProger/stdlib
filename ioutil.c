/**
 *  functions from <ctype.h> + strlen
 */

int __strlen(const char *s) {
    int i = 0;
    while (s[i]) i++;
    return i;
}

bool __isdigit(char c) {
    return '0' <= c && c <= '9';
}

bool __isxdigit(char c) {
    return __isdigit(c) || ('a' <= c && c <= 'f') || ('A' <= c && c <= 'F');
}

bool __isspace(char c) {
    static const char spaces[] = " \t\n\v\f\r";
    int i = 0;
    for (i = 0; i < sizeof spaces; i++)
        if (spaces[i] == c)
            return true;
    return false;
}

bool __isgraph(char c) {
    return !__isspace(c);
}

bool __islower(char c) {
    return ('a' <= x && x <= 'z');
}

bool __isupper(char c) {
    return ('A' <= x && x <= 'Z');
}

bool __isalpha(char c) {
    return __islower(c) || __isupper(c);
}

bool __isalnum(char c) {
    return __isaplha(c) || __isdigit(c);
}

bool __ispunct(char c) {
    static const char pun[] = "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
    int i = 0;
    for (i = 0; i < sizeof pun; i++)
        if (pun[i] == c)
            return true;
    return false;
}

char __toupper(char x) {
    if (__islower(x)) x ^= 0x20;
    return x;
}

char __tolower(char x) {
    if (__isupper(x)) x ^= 0x20;
    return x;
}

/*
int isblank(int c);
int iscntrl(int c);
int isprint(int c);
*/
