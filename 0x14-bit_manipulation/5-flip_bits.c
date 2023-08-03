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
	unsigned long int p = 1;
	unsigned int count = 0;

	p <<= 63;
	while (!(p & n) && !(p & m) && p)
		p >>= 1;
	if (!p)
		return (0);
	while (p)
	{
		if ((p & n) != (p & m))
			count++;
		p >>= 1;
	}
	return (count);
}
