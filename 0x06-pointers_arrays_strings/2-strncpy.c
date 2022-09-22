#include "main.h"

/**
 * *_strncpy - copies a sting
 * @dest: pointer to destination of copy
 * @src: pointer to the string to be copied
 * @n: counter variable
 * Return: dest pointer value
 */

char *_strncpy(char *dest, char *src, int n)
{
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';

	return (dest);
}
