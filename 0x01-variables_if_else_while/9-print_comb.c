#include <stdio.h>
/**
 *main - prints possible combinations of digital numbers
 *Return: returns 0 on completion
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
			putchar(10);
		else
		{
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
