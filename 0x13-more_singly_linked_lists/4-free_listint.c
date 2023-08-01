#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: head of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
