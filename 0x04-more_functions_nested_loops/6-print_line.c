#include "main.h"

/**
 * print_line - printing lines from -
 * @n: number of times to print -
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1 ; i <= n ; i++)
			_putchar('_');
		_putchar('\n');
	}
}
