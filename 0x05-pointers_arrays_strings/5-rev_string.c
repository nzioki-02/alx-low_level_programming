#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string input
 * Return:none
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
}
