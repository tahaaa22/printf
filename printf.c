#include "main.h"

/**
  * _printf - prints to standard output
  * @format : specifiers to be printed
  * Return: number of chars printed
  */

int _printf(const char *format, ...)
{
	int i, counter = 0;

	va_list list;

	if (!format)
		return (-1);
	if (format[0] == '\0')
		return (0);
	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
			counter += print_char(list);
		else if (format[i] == '%' && format[i + 1] == 's')
			counter += print_string(list);
		else if (format[i] == '%' && format[i + 1] == '%')
			counter += print_percentage();
		else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			int num = va_arg(list, int);

			counter += print_int(num);
		}
		else if (format[i] == '%' && (format[i + 1] == ' ' || format[i + 1] == '\0'))
			return (-1);
		else if (format[i] == '\'' && format[i + 1] == 'n')
		{
			_putchar('\n');
			i++;
		}
		if (format[i] == '%')
			i++;
	}
	va_end(list);
	return (counter);
}

