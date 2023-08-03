#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to get bit from
 * @index: index of the bit to get
 * Return: value of bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = 1;

	if (index > 63)
		return (-1);
	m <<= index;
	if (m & n)
		return (1);
	return (0);
}
