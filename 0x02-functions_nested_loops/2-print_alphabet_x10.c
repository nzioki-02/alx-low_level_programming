#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_x10 - Entry Point
 * Description: prints the alphabet in lowercase x10
 * Return: none
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
