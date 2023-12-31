#include <stdio.h>
#include "lists.h"

/**
 * list_len - return the nmbr of elements in a linked list
 * @h: head of the list
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
