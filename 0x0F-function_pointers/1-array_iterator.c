#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *array_iterator -executes a function for each element of array
 *@array: The array to loop through
 *@size: size of the array
 *@action: a pointer to the function to be executed
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, nelem = size / (sizeof(int));

	if (!array || !action || size )
		exit(98);

	for (i = 0; i < nelem; i++)
		(*action)(array[i]);
}
