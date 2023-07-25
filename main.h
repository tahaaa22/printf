#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "_printf.c"
#include "functions2.c"

int print_int(int num);
int _putchar(char c);
int print_char(va_list args);
int print_percentage(void);
int print_string(va_list args);
int _printf(const char *format, ...);

#endif
