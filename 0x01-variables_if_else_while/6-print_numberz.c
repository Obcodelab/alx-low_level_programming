#include <stdio.h>

/**
 * main -  prints 0123456789 without using char
 *
 * Return: 0
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
