#include "main.h"

/**
 * _isalpha - is a fuction that checks
 * if c is alphabetic character or not
 * @c: the character to check
 * Return: 1 if lower 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
