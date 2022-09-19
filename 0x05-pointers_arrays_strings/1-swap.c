#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: a pointer to the first variable
 *@b: a pointer to the second variable
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
