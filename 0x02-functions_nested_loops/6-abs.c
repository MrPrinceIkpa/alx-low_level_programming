#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 *@n: the number to be tested. The data type is int
 *Return: returns the absolute value of the passed integer
 **/
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return ((unsigned int) n);
}
