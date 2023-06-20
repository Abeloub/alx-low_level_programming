#include "main.h"

/**
 * main - Print alphabet in lowercases
 * Return: 0
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
