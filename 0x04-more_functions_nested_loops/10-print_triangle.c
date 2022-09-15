#include "main.h"

/**
 *print_triangle - prints a triangle followed by a new line
 *@size: the size of the triangle
 *Return: void
 */
void print_triangle(int size)
{
	int i, ispc, ihsh;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (ispc = 1; ispc <= (size - (i + 1)); ispc++)
			{
				_putchar(32);
			}
			for (ihsh = 1; ihsh <= (i + 1); ihsh++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
