#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercases
 * Description : print all lower case letters
 * using only _putchar function
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
