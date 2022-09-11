#include <stdio.h>
/**
 *main - Print some english alphabets
 *Description: prints all the alphabets in lower case except 'q' and 'e'
 *Return: returns 0 on completion
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 113 || i == 101)
			continue;
		putchar(i);
	}
	putchar(10);
	return (0);
}
