#ifndef _FUNC_POINT_
#define _FUNC_POINT_
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void _putchar(char c);
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
