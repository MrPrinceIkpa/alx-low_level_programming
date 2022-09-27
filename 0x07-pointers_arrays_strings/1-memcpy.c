#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: the memory destination
 *@src: the starting loacation for copy on the memory
 *@n: the span of the copy
 *Return: a pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
