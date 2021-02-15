#include "holberton.h"

/**
 *_strcpy - copy a string
 * @dest: destination of the copied string
 * @src: source of the string
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
