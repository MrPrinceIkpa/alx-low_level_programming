#include <stdio.h>
/**
 *main - prints the alphabets
 *Description: It prints both the lower and upper case letters
 *Return: returns 0 on completion
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	for (i = 65; i < 91; i++)
		putchar(i);
	putchar(10);
	return (0);
}
