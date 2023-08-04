#include <unistd.h>

/**
 * _putchar - Declear character c to standard out,
 * @c: The character to be printed,
 *
 * Return: Success 1.
 * Error, -1 is returned, and error set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
