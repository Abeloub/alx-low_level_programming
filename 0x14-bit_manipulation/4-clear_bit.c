#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: Entree number
 * @index: index of the bit to clear
 * Return: 1 if success or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);
	mask <<= index;
	if (mask & *n)
		*n ^= mask;
	return (1);
}
