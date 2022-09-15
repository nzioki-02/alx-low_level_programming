#include "main.h"

/**
 * _isalpha - Entry point: Found in main
 * @c: input character
 * Description: Checks for alphabetic character
 * Return: 1 if succesful, 0 if not.
 */

int _isalpha(int c)
{
	char upper, lower;
	int alpha;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				alpha = 1;
			else
				alpha = 0;
		}
	}
	return (alpha);
}
