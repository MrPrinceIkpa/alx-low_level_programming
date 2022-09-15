#include "main.h"

/**
 *print_square- prints square followed by new line
 *@size: the size of the square
 *Return: void
 */
void print_square(int size)
{
	int i, ihrzn;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (ihrzn = 0; ihrzn < size; ihrzn++)
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
