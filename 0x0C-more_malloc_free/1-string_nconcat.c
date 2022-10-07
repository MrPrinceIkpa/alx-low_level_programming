#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings
 *@s1: the first string
 *@s2: the second string
 *@n: the amount of bytes of s2 to add to s1
 *Return: a pointer to the new memory location or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_len, s2_len;
	int i = 0, i2 = 0;
	char *test = s1, *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
recheck:
	while (test[i])
		i++;
	if (test == s1)
	{
		s1_len = i;
		i = 0;
		test = s2;
		goto recheck;
	}
	else
		s2_len = i;
	if ((int) n < s2_len)
		s2_len = (int) n;
	ptr = malloc(s1_len + s2_len + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (s1_len + s2_len + 1); i++)
	{
		if (i < s1_len)
		{
			if (s1[i])
				ptr[i] = s1[i];
			else
				i--;
			continue;
		}
		ptr[i] = s2[i2];
		i2++;
	}
	ptr[s1_len + s2_len] = '\0';
	return (ptr);
}
