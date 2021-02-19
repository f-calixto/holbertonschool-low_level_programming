#include "holberton.h"

/**
 * cap_string - entry point
 * @a: array to uppercase
 * number of elements of the array
 * Return: uppercase string
 */

char *cap_string(char *a)
{
	int i, j;
	char s[] = {',', ';', '.', ' ', 10, '!', '?', '(', ')', '{', '}', '\t', '"'};

	for (i = 0; a[i] != 0; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			for (j = 0; s[j] != '\0'; j++)
			{
				if (a[i - 1] == s[j])
				{
					a[i] = a[i] - 32;
					break;
				}
			}
		}
	}
return (a);
}