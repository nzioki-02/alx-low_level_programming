#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execcutes a function given as a parameter on
 * every element in an array
 * @array: array to be iterated over
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
