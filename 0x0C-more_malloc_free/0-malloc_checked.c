#include "main.h"

/**
 * malloc_checked - cause normal process termination with a status value of 98
 * @b: memory
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
