#include <stdio.h>
/**
 *main - the reference funtion for the sourcecode
 *Return: returns 1
 */
int main(void)
{
	char oputt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(oputt, 1, sizeof(oputt), stderr);
	return (1);
}
