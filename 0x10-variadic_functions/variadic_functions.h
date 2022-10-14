#ifndef _VARIADIC_FUNC_
#define _VARIADIC_FUNC_

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
char *_copystr(char *mstr);
void print_all(const char * const format, ...);

#endif
