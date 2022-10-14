#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *print_numbers - prints numbers followed by a new line
 *@seperator: a sting seperator for the numbers
 *@n: the amount of numbers to be printed
 *Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list trn;

	if (n == 0)
		return;
	va_start(trn, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d\n", va_arg(trn, int));
		else
		{
			printf("%d", va_arg(trn, int));
			if (seperator == NULL)
				continue;
			else
				printf("%s", seperator);
		}
	}
	va_end(trn);
}
