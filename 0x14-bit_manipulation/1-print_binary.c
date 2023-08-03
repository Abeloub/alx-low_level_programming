#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int m = 1;
	int i = 0;

	m <<= 63;
	while (!(m & n) && m)
		m >>= 1;
	if (!m)
	{
		_putchar('0');
		return;
	}
	while (m)
	{
		if (m & n)
			_putchar('1');
		else
			_putchar('0');
		m >>= 1;
		i++;
	}
}
