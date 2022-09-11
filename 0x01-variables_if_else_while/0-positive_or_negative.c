#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - determines if random number is +ve or -ve
 *Return: returns 0 on completion
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
		printf("%d is positive\r\n", n);
	else if (n < 0)
		printf("%d is negative\r\n", n);
	else if (n == 0)
		printf("%d is 0\r\n", n);
	
	return (0);
}
