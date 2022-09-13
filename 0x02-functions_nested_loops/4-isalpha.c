#include "main.h"

/**
 *_isalpha - checks if a char is alpahabetic
 *@c: the char to be tested. The data type is int
 *Return: returns 1 if @c is alpahabetic otherwise returns 0
 **/
int _isalpha(int c)
{
	if (c < 65 || (c > 90 && c < 97) || c > 122)
		return (0);
	else
		return (1);
}
