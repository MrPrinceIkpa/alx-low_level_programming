#ifndef _CALC_3
#define _CALC_3

/**
 *struct op -struct op
 *@op: the operatot
 *@f: the function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
