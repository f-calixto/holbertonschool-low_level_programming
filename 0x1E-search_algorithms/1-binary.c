#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - linear search for element in array
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m;

	if (!array)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		print_array(array, l, r + 1);
		m = (l + r) / 2;
		if (array[m] < value)
		{
			l = m + 1;
		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}

/**
 * print_array - entry point
 * @a: pointer to array
 * @s: index to start printing from
 * @f: index to finish printing
 * Return: Nothing
 *
 */

void print_array(int *a, int s, int f)
{
	int i;

	for (i = s; i < f; i++)
	{
		if (i < f - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
