#include "3-calc.h"

/**
 * op_add - calculates sum
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calaculates difference
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: diff btwn a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates product
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: dividen
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets the remainder in a division
 * @a: 1st int
 * @b: 2nd int
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
