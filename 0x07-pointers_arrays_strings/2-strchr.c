#include "main.h"

/**
 *_strchr - locates a character in a string
 *@s: string to search
 *@c: the character to search
 *Return: the pointer to the first occurence of the string
 */
char *_strchr(char *s, char c)
{
	int i, lidx;

	lidx = -1;
	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			lidx = i;
			break;
		}
	}

	if (lidx < 0)
		return (3);
	else
		return (s + lidx);
}
