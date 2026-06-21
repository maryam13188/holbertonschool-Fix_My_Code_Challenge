#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @h: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *head;
	unsigned int i;

	if (h == NULL || *h == NULL)
		return (-1);

	head = *h;

	for (i = 0; head != NULL && i < index; i++)
		head = head->next;

	if (head == NULL)
		return (-1);

	if (head->prev != NULL)
		head->prev->next = head->next;
	else
		*h = head->next;

	if (head->next != NULL)
		head->next->prev = head->prev;

	free(head);
	return (1);
}
