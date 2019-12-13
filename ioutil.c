
int __strlen(const char *s) {
    int i = 0;
    while (s[i]) i++;
    return i;
}

bool __isdigit(char d) {
    return '0' <= d && d <= '9';
}

bool __isspace(char s) {
    static const char spaces[] = " \t\n\v\f\r";
    int i = 0;
    for (i = 0; i < sizeof spaces; i++)
        if (spaces[i] == s)
            return true;
    return false;
}

char __toupper(char x) {
    if ('a' <= x && x <= 'z') x ^= 0x20;
    return x;
}

char __tolower(char x) {
    if ('A' <= x && x <= 'Z') x ^= 0x20;
    return x;
}
