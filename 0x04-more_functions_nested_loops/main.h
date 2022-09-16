/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _isupper - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 0 or 1.
 */
int _isupper(int c);

/**
 * _isdigit - checks if the char is a digit
 * @c: The character to check
 *
 * Return: 1 if digit. 0 otherwise.
 */
int _isdigit(int c);

/**
 *print_numbers - prints characters 0-9
 *Return: 0 on completion
 */
void print_numbers(void);

/**
 *mul - multiplies two numbers
 *@a: First integer
 *@b: second integer
 *Return: multiplication result
 */
int mul(int a, int b);

/**
 *print_most_numbers - print digits execept 2 and 4
 *Return: 0 on completion
 */
void print_most_numbers(void);

/**
 *more_numbers - print digits 0 - 14, ten times
 *Return: void
 **/
void more_numbers(void);

/**
 *print_line - draws a straight line
 *@n: the length of the line
 *Return: void
 */
void print_line(int n);

/**
 *print_diagonal - draws a diagonal line
 *@n: the length of the line
 *Return: void
 */
void print_diagonal(int n);

/**
 *print_square- prints square followed by new line
 *@size: the size of the square
 *Return: void
 */
void print_square(int size);

/**
 *print_triangle - prints a triangle followed by a new line
 *@size: the size of the triangle
 *Return: void
 */
void print_triangle(int size);

/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return:void
 */

void print_number(int n);
