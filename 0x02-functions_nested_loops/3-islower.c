#include "main.h"

/**
 *_islower - cheacks if a char is lowercase
 (*An assummption that the machine uses ASCII character set
 *Return: returns 1 if lowercase, otherwise returns 0
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
		return 0;
	else
		return 1;
}
