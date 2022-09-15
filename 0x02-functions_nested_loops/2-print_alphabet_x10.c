#include"main.h"

/**
 * print_alphabet_x10 - Entry Point
 * Description: prints the alphabet in lowercase x10
 * Return: none
 */

void print_alphabet_x10(void)
{
	char c;
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
