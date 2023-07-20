#include "variadic_functions.h"

/**
 * print_strings - prints n strings
 * @separator: printed between strings
 * @n: number of parameters
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i = 0;
	va_list p;

	va_start(p, n);

	while (i < n)
	{
		str = va_arg(p, char*);
		printf("%s", str ? str : "(nil)");
		if (i < n - 1)
			printf("%s", separator ? separator : "");
		i++;
	}
	printf("\n");
	va_end(p);
}
