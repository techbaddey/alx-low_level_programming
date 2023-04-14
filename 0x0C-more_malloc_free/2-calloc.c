#include "main.h"
/**
 * _calloc -  a function that allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: size of one byte of element
 *
 * Description
 * - The memory is set to zero
 * - If nmemb or size is 0, then _calloc returns NULL
 * - If malloc fails, then _calloc returns NULL
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *_malloc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	_malloc = malloc(nmemb * size);
	if (_malloc == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		_malloc[i] = 0;
	}

	return (_malloc);
}
