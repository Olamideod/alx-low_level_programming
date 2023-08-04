#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one num to another num,
 * @n: first num,
 * @m: Second num to be convert to
 * Return: Num of bits that needs to fliped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
