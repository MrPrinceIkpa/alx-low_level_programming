#include "main.h"

/**
 *_puts_recursion - prints a string followed by a newline
 *@s: the string
 *Return: void
 */
void _puts_recursion(char *s)
{
	char tmp = *(s + 1);
	if (!*s)
	{
		_putchar(10);
		return;
	}

	_putchar(*s);
	_puts_recursion(tmp);
}
