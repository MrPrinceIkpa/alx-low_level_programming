#include "main.h"

/**
 *more_numbers - print digits 0 - 14, ten times
 *Return: void
 */
void more_numbers(void)
{
	int times, digits, i, breaker;

	digits = 0;
	breaker = 58;


	for (times = 0; times < 10; times++)
	{
		for (i = 48; i < breaker; i++)
		{
			if (digits == 1)
			{
				breaker = 53;
				_putchar(49);
			}
			_putchar(i);
			if (i == 57)
			{
				i = 47;
				digits++;
			}
		}
		_putchar(10);
		digits = 0;
		breaker = 58;
	}

}
