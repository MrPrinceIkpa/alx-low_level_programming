#include "main.h"

/**
 *_isupper - checks a character if uppercase
 *@c: The character to be tested
 (*Assumption: ASCII character is used
 )*
 *Return: 1 if char is uppercase. 0 otherwise
 */
int _isupper(int c)
{	
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
