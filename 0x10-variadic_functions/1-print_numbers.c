#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @n: number of parameter
 * @separator: string to print between numbers
 * @... : numbers to be printed
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (i < n - 1)
			printf("%s", separator ? separator : "");
	}
	printf("\n");
	va_end(p);
}
