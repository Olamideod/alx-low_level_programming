#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at any index given,
 * @n: Decimal num passed by a pointer,
 * @index: index position to change, starts from 0,
 * Return: 1 if it works, -1 if an error occur.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}
