#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2
 * and null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		len1++, i++;
	while (*(s2 + j))
		len2++, j++;
	len2++;

	result = malloc(sizeof(char) * (len1 + len2));

	if (result == NULL)
		return (NULL);

	i = 0, j = 0;
	while (i < len1)
	{
		*(result + i) = *(s1 + i);
		i++;
	}
	while (j < len2)
	{
		*(result + i) = *(s2 + j);
		i++, j++;
	}

	return (result);
}
