#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocates memory using malloc
 *@b: the size of the memory to be allocated
 *Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *tmp;

	tmp = malloc(b);

	if (tmp == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (tmp);
}
