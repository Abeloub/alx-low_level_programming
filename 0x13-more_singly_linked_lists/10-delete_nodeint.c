#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: head of list
 * @index: index of node
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *tmp_second;
	unsigned int i;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (!tmp)
			return (-1);
		tmp = tmp->next;
	}
	tmp_second = tmp->next;
	tmp->next = tmp_second->next;
	free(tmp_second);
	return (1);
}
