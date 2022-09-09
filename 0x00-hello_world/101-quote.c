#include <stdio.h>
/**
 *main - the reference funtion for the sourcecode
 *Return: returns 1
 */
int main(void)
{
	char oput[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, oput, 59);
	return (1);
}
