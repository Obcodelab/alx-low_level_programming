#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: 0
 */

int main(void)
{
	int one;
	int ten;
	int hundred;

	for (hundred = 0; hundred < 8; hundred++)
	{
		for (ten = hundred + 1; ten < 9; ten++)
		{
			for (one = ten + 1; one < 10; one++)
			{
				putchar((hundred % 10) + '0');
				putchar((ten % 10) + '0');
				putchar((one % 10) + '0');
				if (hundred == 7 && ten == 8 && one == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
