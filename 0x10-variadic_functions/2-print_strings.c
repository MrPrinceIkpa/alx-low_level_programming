#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *_copystr - copies string from one location to another
 *@mstr: the string to copy
 *Return: a pointer to the new location
 */
char *_copystr(char *mstr)
{
	char *add;
	int i;

	for (i = 0; mstr[i] != '\0'; i++)
		;
	add = malloc(sizeof(char) * (i + 1));
	for (i = 0; mstr[i] != '\0'; i++)
		add[i] = mstr[i];
	add[i + 1] = '\0';
	return (add);
}
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
		tmp_str = _copystr(va_arg(trn, char *));
		if (tmp_str == NULL)
			printf("(nil)");
		else
			printf("%s", tmp_str);
		free(tmp_str);
		if (i != n - 1)
		{
			if (seperator == NULL)
				continue;
			else
				printf("%s", seperator);
		}
	}
	printf("\n");
	va_end(trn);
}
