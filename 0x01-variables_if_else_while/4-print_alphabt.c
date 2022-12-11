#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 *
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar("\n");

	return (0);
}
