#include <stdarg.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "std.h"

#define __getchar getchar
#define __putchar putchar
#define __isspace isspace


int __strlen(const char *s) {
    int i = 0;
    while (s[i]) i++;
    return i;
}

bool __isdigit(char d) {
    return '0' <= d && d <= '9';
}

void __readint(int *x) {
    char c = 0;
    while (c == '\b' || !__isspace(c)) {
        c = __getchar();
        if (__isdigit(c))
            (*x) = (*x) * 10 + c - '0';
    }
}

int __printf(const char *fmt, ...) {
    int i = 0;
    va_list args;
    va_start(args, fmt);
    for (; i < __strlen(fmt); i++) {
        if (fmt[i] != '%')
            __putchar(fmt[i]);
        else {
            if (fmt[i + 1] == '%') /* will not left the string, because if i == n - 1, then fmt[i + 1] == 0 */
                __putchar('%');
            else {
                switch (fmt[i]) {
                    // va_arg(args, int);
                }
            }
        }
    }
    va_end(args);
    return 0;
}

int __scanf(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    va_end(args);
    return 0;
}
