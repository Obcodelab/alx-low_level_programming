#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number
 *
 * Return: 1 if greater than 0, -1 if less, 0 if 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
}