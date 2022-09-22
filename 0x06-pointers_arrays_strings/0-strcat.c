#include "main.h"

/**
 * *_strcat - Concatenates two strings by appending
 * src string to dest string
 * @dest: string input
 * @src: string input
 * Return: pointer to resulting dest string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i +j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
