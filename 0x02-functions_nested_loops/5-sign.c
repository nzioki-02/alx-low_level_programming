#include "main.h"

/**
 * print_sign - Entry point: Found in main
 * @n: Input value
 * Description: Prints the sign of a number
 * Return: 1 if number is +ve 0 if it is 0 -1 if -ve
 */

int print_sign(int n)
{
	int ret;

	if (n == 0)
	{
		ret = 0;
		_putchar('0');
	}
	else if (n < 1)
	{
		ret = -1;
		_putchar('-');
	}
	else
	{
		ret = 1;
		_putchar('+');
	}

	return (ret);
}

