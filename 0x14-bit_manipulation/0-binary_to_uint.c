#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: 0 if there is a char that is not 0 or 1
 * or if b is NULL
 * otherwise the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			n <<= 1;
			n += b[i] == '1' ? 1 : 0;
			i++;
		}
		else
			return (0);
	}
	return (n);
}
