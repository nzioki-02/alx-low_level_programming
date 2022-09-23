#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: array to reverse
 * @n: size of array
 * return: none
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
