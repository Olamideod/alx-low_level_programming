#include "main.h"

/**
 * get_endianness - Check for endianness,
 * Return: 0 if large endian, or 1 if small endian
 */
int get_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
