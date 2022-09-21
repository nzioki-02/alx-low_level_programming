#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * starting with the first charcter then a new line
 * @str: string input
 * Return: none
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	_putchar(str[0]);

	if (str[j] != '\0')
	{
		for (i = 1; i % 2 == 0; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
