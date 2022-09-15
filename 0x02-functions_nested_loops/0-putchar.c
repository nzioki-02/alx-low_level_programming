#include <unistd.h>
#include "main.h"

/**
 * main - Entry Point
 * Description: Prints out _putchar
 * Return: 0 (Success)
 */

int main(void)
{
	char c[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(c[i]);
	_putchar('\n');

	return (0);
}
