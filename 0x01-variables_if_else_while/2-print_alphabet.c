#include <stdio.h>

/**
 *main - prints letters of the alphabet
 *Return: returns 0 in completion
 */
int main(void)
{
	for(int i = 97; i < 123; i++)
	{
		putchar(i);
		if (i == 122)
			putchar(10);
	}		
	return 0;
}	
