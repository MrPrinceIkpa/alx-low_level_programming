#include <stdio.h>
#include <math.h>

/**
 *main - prints the largest prime factor of the number 612852475143
 *Return: 0 on completion
 */
int main(void)
{
	unsigned long int tint, sqtint;

	tint = 612852475143;
	for (sqtint = (long int) sqrt(tint); sqtint > 2; sqtint--)
	{
		if (tint % sqtint == 0)
		{
			printf("%lu\n", sqtint);
			break;
		}
	}
	return (0);
}
