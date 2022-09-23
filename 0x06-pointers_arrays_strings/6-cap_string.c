#include "main.h"

/**
 * index_of - Checks whether character is a special character
 * @i: return value
 * Return: true or false
 */

int index_of(char i)
{
	int x;
	char separators[13] = {' ', '\n', '\t', ',', ';', '.',
		'!', '?', '"', ')', '(', '}', '{' };

	for (x = 0; x < 13; x++)
	{
		if (separators[x] == i)
			return (1);
		}
	return (0);
}

/**
 * *cap_string - Capitalizes all words of a string
 * @s: string
 * Return: String in Capital
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (index_of(s[i]))
		{
			continue;
		}
		if (s[i] >= 'a' && s[i] <= 'z' && (index_of(s[i - 1]) || i == 0))
			s[i] = s[i] - 32;
	}
	return (s);
}

