#include <stdlib.h>
#include "fuction_pointers.h"

/**
 *array_iterator -executes a function for each element of array
 *@array: The array to loop through
 *@size: size of the array
 *@action: a pointer to the function to be executed
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
