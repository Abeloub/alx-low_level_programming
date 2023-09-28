#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ma = 1;
	unsigned int count = 0;

	ma <<= 63;
	while (!(ma & n) && !(ma & m) && ma)
		ma >>= 1;
	if (!ma)
		return (0);
	while (ma)
	{
		if ((ma & n) != (ma & m))
			count++;
		ma >>= 1;
	}
	return (count);
}
