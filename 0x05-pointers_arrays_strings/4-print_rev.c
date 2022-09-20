#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: string input
 * Return: none
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s);

	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
}
