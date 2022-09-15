#include "main.h"

/**
 * _islower - Entry Point: Found in main
 * @c: input character
 * Description: Checks for lowercase chacarcters
 * Return: 1 if sucessful 0 if not.
 */

int _islower(int c)
{
	char a;
	int lower;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
			lower = 1;
		else
			lower = 0;
	}

	return (lower);
}
