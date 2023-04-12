#include "main.h"

/**
  * _strlen_recursion - fuction that return length
  * @s: input string
  * Return: length of string
  */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = 1 + _strlen_recursion(s + 1);
	}
	return (i);
}
