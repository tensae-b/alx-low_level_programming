#include "main.h"

/**
 * _islower - is a fuction that checks
 * if is lowercase or not
 * @c: the character to check
 * Return: 1 if lower 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
