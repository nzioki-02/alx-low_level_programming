#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string input
 * Return:none
 */

void rev_string(char *s)
{
	int length = 0;
	int mid;
	int i;
	char temporary;

	while (s[length] != '\0')
	{
		length++;
	}
	/* Halfing the string*/
	mid = length / 2;
	/*Reversing from the middle both ways*/

	for (i = 0; i < mid; i++)
	{
		temporary = s[i];
		s[i] = s[length - i - 1];
		s[length] = temporary;
		_putchar(s[i]);
		_putchar(s[length]);
	}
	_putchar('\n');
}
