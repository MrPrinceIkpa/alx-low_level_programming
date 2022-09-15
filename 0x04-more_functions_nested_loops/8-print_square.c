#include "main.h"

/**
 *print_square- prints square followed by new line
 *@size: the size of the square
 *Return: void
 */
void print_square(int size)
{
	int i, ihrzn;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (ihrzn = 0; ihrzn < n; ihrzn++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
