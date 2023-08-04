#include "main.h"
#include <stdio.h>
/**
 * clear_bit - Set the value of the bit to 0, at any given index,
 * @n: Pointers to decimal num to change,
 * @index: index position to be changed,
 * Return: 1 if it worked, -1 if an error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int hold;

	if (index > 64)
		return (-1);
	hold = index;
	for (i = 1; hold > 0; i *= 2, hold--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
