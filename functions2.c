#include "main.h"

/**
 * print_int - prints an integer to stdout
 *
 * @num: integer to print
 * Return: number of characters printed
 */

int print_int(int num)
{
	int i, temp, digits;
	int count = 0;

	if (num < 0)
	{
		count += _putchar('-'); /* print negative sign for negative integers */
		num = -num;
	}
	temp = num;
	digits = 0;
	do {
		digits++;
		temp /= 10;
	} while (temp != 0);
	temp = 1;
	for (i = 1; i < digits; i++)
	{
		temp *= 10;
	}
	do {
		count += _putchar('0' + num / temp); /* print each digit of the integer */
		num %= temp;
		temp /= 10;
	} while (temp != 0);

	return (count);
}
