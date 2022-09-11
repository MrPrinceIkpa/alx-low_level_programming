#include <stdio.h>
/**
 *main - prints smallest possible combination of 2 digits
 *Return: returns 0 on completion
 */
int main(void)
{
	int i;
	int q;

	for (i = 48; i < 58; i++)
	{
		for (q = 48; q < 58; q++)
		{
			if (i > q || i == q) {
				continue;
			}
			putchar(i);
			putchar(q);
			if (i == 56 && q == 57)
			{
				break;
			}
			else
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
