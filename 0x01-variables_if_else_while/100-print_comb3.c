#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens < 9; tens++)
	{
		for (ones = tens + 1; ones < 10; ones++)
		{
			putchar((tens % 10) + '0');
			putchar((ones % 10) + '0');

			if (tens == 8 && ones == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
