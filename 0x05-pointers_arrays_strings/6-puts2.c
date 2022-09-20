#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * starting with the first charcter then a new line
 * @str: string input
 * Return: none
 */

void puts2(char *str)
{
	int i = 0;

	_putchar(str[i]);

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
		i++;
	}

	}

}
