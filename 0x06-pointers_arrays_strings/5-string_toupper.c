#include "main.h"

/**
 * *string_toupper - changes all lowercase letter to uppercase
 * @a: character to change to upper
 * Return: value of the uppercase
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	return (a);
}
