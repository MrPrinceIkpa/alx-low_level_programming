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
	if (ldigit < 0)
		n *= -1;
	printf("Last digit of %d is %d ", n, ldigit);
	if (ldigit > 5)
		printf("and is greater than 5\n");
	else if (ldigit == 0)
		printf("and is 0\n");
	else if (ldigit < 6 && ldigit != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
