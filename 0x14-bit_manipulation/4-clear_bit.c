#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to clear bit
 * @index: index of bit to clear
 * Return: 1 if success or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index > 63)
		return (-1);
	m <<= index;
	if (m & *n)
		*n ^= m;
	return (1);
}
