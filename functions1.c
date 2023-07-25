#include "main.h"

/**
  * print_char - prints char
  * @args : variable to be printed
  * Return: 1 on success
  */
int print_char(va_list args)
{
	char c  = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
  * print_string - prints string
  * @args : variable to be printed
  * Return: number of chars printd
  */
int print_string(va_list args)
{
	char *c  = va_arg(args, char*);
	int i;

	for (i = 0; c[i] != '\0'; i++)
		_putchar(c[i]);
	return (i);
}

/**
  * print_percentage - prints percentage
  * Return: 1 on success
  */
int print_percentage(void)
{
	_putchar('%');
	return (1);
}
