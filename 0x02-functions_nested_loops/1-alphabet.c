#include "main.h"

/**
 * print_alphabet - is a fuction to print alphabet
 * description prints all alphabet in lowercase
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
