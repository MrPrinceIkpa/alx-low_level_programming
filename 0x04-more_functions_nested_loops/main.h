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
 **/
int mul(int a, int b);
