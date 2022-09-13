#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@n: the number to be tested. The data type is int
 *Return: returns the last digit of the passed integer
 **/
int print_last_digit(int n)
{
	int ldigit;

	if (n < 0)
		n *= -1;
	ldigit = n % 10;
	_putchar(ldigit + '0');
	return (ldigit);
}
