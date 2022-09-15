#include "main.h"
#include <unistd.h>

/**
 * _abs -Entry point: Found in main
 * @r: Input
 * Description: Computes the absolute value of an integer
 * Return: absolute value
 */

int _abs(int r)
{
	int r;

	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
