#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all of  its parameters
 * @n: the number of parameters
 * Return: Sum of all its parameters or 0 in n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list p;

	va_start(p, n);

	while (i < n)
		sum += va_arg(p, int);
		i++;

	va_end(p);

	return (sum);
}
