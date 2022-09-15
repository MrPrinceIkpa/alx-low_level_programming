#include "main.h"

/**
 *print_diagonal - draws a diagonal line
 *@n: the length of the line
 *Return: void
 */
void print_diagonal(int n)
{
	int count, i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (count = 0; count < (i + 2); count++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
