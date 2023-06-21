#include "main.h"

/**
 * _isalpha - check if given character is an alphabet
 * @c: character to check
 * Return: 1 if c is alphabet
 * and 0 if not
 */

int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
		return (1);
	return (0);
}
