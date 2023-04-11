#ifndef OUTPUT_H
#define OUTPUT_H

#ifndef STANDARD_LIBRARY_STDIO
#define STANDARD_LIBRARY_STDIO
    #include <stdio.h>
#endif
#ifndef STANDARD_LIBRARY_STDARG
#define STANDARD_LIBRARY_STDARG
    #include <stdarg.h>
#endif

void write_int(int num);
void f_write_int(FILE* stream, int num);
void write_line(const char* format, ...);
void f_write_line(FILE* stream, const char* format, ...);

#endif

