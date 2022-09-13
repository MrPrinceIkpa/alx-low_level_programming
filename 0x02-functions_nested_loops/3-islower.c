#include "main.h"

/**
 *_islower - cheacks if a char is lowercase
 *@c: the character which is been tested. Expected
 * be of the datatype integer.
 (*An assummption that the machine uses ASCII character set
 )* is made
 *Return: returns 1 if lowercase, otherwise returns 0
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
		return (0);
	else
		return (1);
}
