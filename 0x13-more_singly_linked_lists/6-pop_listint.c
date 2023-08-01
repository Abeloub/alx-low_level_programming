#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a list
 * @head: head of list
 * Return: head node’s data (n) or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head || !*head)
		return (0);
	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
