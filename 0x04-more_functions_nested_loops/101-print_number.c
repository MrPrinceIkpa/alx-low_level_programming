#include "main.h"

/**
 * print_number - prints an integer n
 *@n: integer to be printed
 */
void print_number(int n)
{
	unsigned int tint;

	if (n < 0)
	{
		tint = -n;
		_putchar('-');
	}
	else
		tint = n;
	if (tint / 10)
		print_number(tint / 10);
	_putchar((tint % 10) + '0');
}
