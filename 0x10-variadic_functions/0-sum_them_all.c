#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all - sums a list of integers
 *@n: the number of integers to print
 *Return: the sum of the integers
 *or null, if n equals 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list trn;
	int total = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(trn, n);
	for (i = 0; i < n; i++)
		total = total + va_arg(trn, int);
	va_end(trn);
	return (total);
}
