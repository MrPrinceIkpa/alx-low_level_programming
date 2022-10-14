#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - prints strings followed by a new line
 *@seperator: a string to seperate the strings
 *@n: the amount of strings to be printed
 *Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list trn;
	char *tmp_str;

	if (n == 0)
		return;
	va_start(trn, n);
	for (i = 0; i < n; i++)
	{
		tmp_str = va_arg(trn, char *);
		if (!tmp_str)
			printf("(nil)");
		else
			printf("%s", tmp_str);
		if (i != (n - 1))
		{
			if (seperator)
				printf("%s", seperator);
		}
	}
	printf("\n");
	va_end(trn);
}
