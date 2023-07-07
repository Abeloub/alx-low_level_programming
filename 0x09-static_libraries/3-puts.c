#include "main.h"

/**
 * _puts - prints a string
 * @str: tring
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
