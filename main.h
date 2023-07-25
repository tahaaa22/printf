#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int print_int(int num);
int _putchar(char c);
int print_char(va_list list);
int print_percentage(void);
int print_string(va_list list);
int _printf(const char *format, ...);

#endif
