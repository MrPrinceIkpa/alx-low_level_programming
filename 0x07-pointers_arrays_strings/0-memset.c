#include "main.h"

/**
 *_memset - fills memory with constant byte
 *@s: memory address starting location
 *@b: the constant byte to be used for filling
 *@n: extension from the starting location
 *Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
