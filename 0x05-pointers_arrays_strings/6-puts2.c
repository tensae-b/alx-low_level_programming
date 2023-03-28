#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: input char
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (i % 2 != 0)
		{
			i++;
			continue;
		}
		_putchar(str[i]);
		i++;
	}
}
