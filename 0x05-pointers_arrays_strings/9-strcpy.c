#include "main.h"

/**
 * *_strcpy - copies string pointed to by src including null
 * terminator to buffer pointed by dest
 * @dest: char pointer
 * @src: char pointer
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char src[];
	char dest[];
	char *ret_ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ret_ptr);
}

