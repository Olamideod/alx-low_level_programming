#include "main.h"
#include <stdio.h>
/**
 * get_bit - Get value of the  bit at any given index,
 * @n: Num to be evaluated,
 * @index: index starts from 0, at the bit we want to get,
 * Return: Value of the bit in index, or -1 if an error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
