#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints the last digit of a random number
 *Return: returns 0 on completion
 */

int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ldigit = n % 10;
	printf("Last digit of %d is %d ", n, ldigit);
	if (n > 5)
		printf("and is greater than 5");
	else if (n == 0)
		printf("and is 0");
	else if (n < 6 && n != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
