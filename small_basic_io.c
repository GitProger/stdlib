#include <stdarg.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "std.h"

int __sprintf(char *dst, const char *fmt, ...) {
    int i = 0;
    va_list args;
    va_start(args, fmt);
    // va_arg(args, int);
    va_end(args);
    return 0;
}

int __sscanf(const char *src, const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);

    va_end(args);
    return 0;
}
