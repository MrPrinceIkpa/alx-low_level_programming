#include "main.h"

/**
 *print_alphabet - does the actual printing of the alpahbets
 *Return: return is void
 */
void print_alphabet(void)
{
	char abet;

	for (abet = 97; abet < 123; abet++)
		_putchar(abet);
	_putchar(10);
}
