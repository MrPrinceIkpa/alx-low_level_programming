#include <stdio.h>
/**
 *main - the reference funtion for the sourcecode
 *Return: returns 1
 */
int main(void)
{
	char oput[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(oput, sizeof(oput), 1, stderr);
	return (1);
}
