#include "function_pointers.h"

/**
 * int_index - returns the index of the first element
 * for which the cmp function does not return 0
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: -1 if no matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
