#include"main.h"

/**
 * print_alphabet - Entry Point
 * Description: prints the alphabet in lowercase and adds a new line.
 * Return: none
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
