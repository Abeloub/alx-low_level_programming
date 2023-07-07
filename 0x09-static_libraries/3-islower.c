#include "main.h"

/**
 * _islower - checking for lower case
 * @c: Character to check
 *  Return: 1 if c is lowercase
 * 0 if it's not
 */

int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	return (0);
}
