#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: longer string to search
 * @needle: first occurrence of the substring
 * Return: pointer beg of substring or @Null if it not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while ((haystack[i] == needle[0]) && needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (needle[j])
		{
			j = 0;
			i++;
		}
		else
			return (haystack + i);
	}
	return (0);
}
