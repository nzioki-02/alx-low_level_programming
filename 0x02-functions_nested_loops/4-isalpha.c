#include "main.h"
#include <unistd.h>

/**
 * _isalpha - Entry point: Found in main
 * @c: input character
 * Description: Checks for alphabetic character
 * Return: 1 if succesful, 0 if not.
 */

int _isalpha(int c)
{
	char upper, lower;
	int alpha = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (c == lower)
			alpha = 1;
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
			alpha = 1;
	}

	return (alpha);
}
