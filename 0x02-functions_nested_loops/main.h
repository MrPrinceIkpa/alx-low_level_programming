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
