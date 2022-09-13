/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 *print_alphabet - does the actual printing of the alpahbets
 *Return: return is void
 */
void print_alphabet(void);

/**
 *print_alphabet_x10 - prints the alphabets 10 times
 *Return: return is void
 */
void print_alphabet_x10(void);

/**
 *_islower - cheacks if a char is lowercase
 (*An assummption that the machine uses ASCII character set
 *Return: returns 1 if lowercase, otherwise returns 0
 */
int _islower(int c);

/**
 *_isalpha - checks if a char is alpahabetic
 *@c: the char to be tested. The data type is int
 *Return: returns 1 if @c is alpahabetic otherwise returns 0
 **/
int _isalpha(int c);

/**
 *print_sign - prints the sign of a number
 *@n: the number to be tested. The data type is int
 *Return: returns 1 if @n > 0, 0 if @n == 0, -1 if @n < 0
 **/
int print_sign(int n);

/**
 *_abs - computes the absolute value of an integer
 *@n: the number to be tested. The data type is int
 *Return: returns the absolute value of the passed integer
 **/
int _abs(int n);

/**
 *print_last_digit - prints the last digit of a number
 *@n: the number to be tested. The data type is int
 *Return: returns the last digit of the passed integer
 **/
int print_last_digit(int n);
