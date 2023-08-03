#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int m = 1;
	unsigned int count = 0;

	m <<= 63;
	while (!(m & n) && !(m & m) && m)
		m >>= 1;
	if (!m)
		return (0);
	while (m)
	{
		if ((m & n) != (m & m))
			count++;
		m >>= 1;
	}
	return (count);
}
