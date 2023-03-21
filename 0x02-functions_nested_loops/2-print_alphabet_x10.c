#include "main.h"

/**
 * print_alphabet_x10 - fuction to print the alphabet
 * 10 times
 * return - void or 1
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
