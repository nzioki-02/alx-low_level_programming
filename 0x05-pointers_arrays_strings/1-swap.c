#include "main.h"

/**
 * swap_int - Interchanges the value of two integers
 * @a: int value
 * @b: int value
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
