#include <stdio.h>

/**
 *main- solves the fizzBuzz test
 *Return:  0 on completion
 */
int main(void)
{
	int n, val;

	val = 1;

	for (n = 0; n < 100; n++)
	{
		if ((n + 1) % 3 == 0)
		{
			printf("Fizz");
			val = 0;
		}
		if ((n + 1) % 5 == 0)
		{
			printf("Buzz");
			val = 0;
		}
		if (val)
			printf("%d", n + 1);
		if (n == 99)
			putchar(10);
		else
			putchar(32);
		val = 1;
	}
	return (0);
}
