#include "function_pointers.h"

/**
 *print_name - prints a name using a function pointer
 *@name: the name to be printed- an array of char
 *@f: a pointer to a function
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
