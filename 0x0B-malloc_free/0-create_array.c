#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars
 *@size: the size of the array
 *@c: the initializing character
 *Return: a pointer to the array or null
 */

char *create_array(unsigned int size, char c)
{
	char *tarr;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	tarr = malloc(sizeof(char) * size);

	if (tarr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(tarr + i) = c;

	return (tarr);
}
