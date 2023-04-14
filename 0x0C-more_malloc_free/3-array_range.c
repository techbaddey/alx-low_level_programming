#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 *
 * Description:
 * The array created should contain all the values from min (included) to max
 * (included), ordered from min to max
 * - If min > max, return NULL
 * - If malloc fails, return NULL
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *range;
	int i, j;

	if (min > max)
		return (NULL);

	range = malloc((max - min + 1) * sizeof(int));
	if (range == NULL)
		return (NULL);

	j = min;
	for (i = 0; i < (max - min + 1); i++)
	{
		range[i] = j;
		j++;
	}
	return (range);
}
