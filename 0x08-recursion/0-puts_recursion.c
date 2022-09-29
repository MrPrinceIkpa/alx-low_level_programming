#include "main.h"

/**
 *_puts_recursion - prints a string followed by a newline
 *@s: the string
 *Return: void
 */
void _puts_recursion(char *s)
{
	if (!*s)
		_putchar(10);
	_putchar(*s);
	_puts_recursion(*(s + 1));
}
