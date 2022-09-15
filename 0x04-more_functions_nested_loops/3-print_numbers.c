#include "main.h"

/**
 *print_numbers - prints characters 0-9
 *Return: 0 on completion
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
