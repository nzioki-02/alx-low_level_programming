#include "main.h"
#include <stddef.h>

/**
 * *_strncpy - copies a sting
 * @dest: pointer to destination of copy
 * @src: pointer to the string to be copied
 * @n: no. of times to be copied
 * Return:dest pointer value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	/*char *ptr = dest;*/

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}
