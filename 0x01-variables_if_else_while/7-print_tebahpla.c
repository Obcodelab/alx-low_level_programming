#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
