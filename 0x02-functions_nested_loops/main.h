#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
