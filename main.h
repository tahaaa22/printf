#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int print_int(int num);
int _putchar(char c);
int print_char(va_list args);
int print_percentage(void);
int print_string(va_list args);
int _printf(const char *format, ...);

#endif
