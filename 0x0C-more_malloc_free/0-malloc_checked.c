#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: size of memory
 * if malloc fails, the malloc_checked termination with a status value of 98
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr =  malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
