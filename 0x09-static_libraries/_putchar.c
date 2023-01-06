#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: Character
 *
 * Return: 1 if success, -1 if not
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
