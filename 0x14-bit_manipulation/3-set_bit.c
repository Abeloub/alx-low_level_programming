#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to set bit
 * @index: index of bit to set
 * Return: 1 if success or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index > 63)
		return (-1);
	m <<= index;
	*n |= m;
	return (1);
}
