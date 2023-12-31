#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

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
		head = NULL;
	}
}

/**
 * free_listint2 - frees a list
 * @head: head of list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (!head)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
