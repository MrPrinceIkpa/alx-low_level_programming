#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *@array: an array to search
 *@size: the number of elements in the array
 *@cmp: a pointer to a functin used to compare
 *Return: the first index for which cmp doesn't return 0 else
 *returns -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
