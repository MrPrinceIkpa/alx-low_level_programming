#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: the string
 * Return: the value of the length as int
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
