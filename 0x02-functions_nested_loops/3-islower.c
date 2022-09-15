#include "main.h"

/**
 * _islower - Entry Point: Found in main
 * @c: input character
 * Description: Checks for lowercase chacarcters
 * Return: 1 if sucessful 0 if not.
 */

int _islower(int c)
{
	char alph;
	int lower = 0;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (c == alph)
			lower = 1;
	}

	return (lower);
}
