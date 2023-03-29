#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destinating string
 * @src: source string
 * @n: number of characters to be append
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (dest);
}
