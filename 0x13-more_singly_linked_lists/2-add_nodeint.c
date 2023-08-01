#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: head
 * @ne: element to add
 * Return: the address of the new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ne;

	nv = malloc(sizeof(listint_t));
	if (ne == NULL)
		return (NULL);
	ne->n = n;
	ne->next = *head;
	*head = ne;
	return (ne);
}
