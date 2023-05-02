#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: the first node in the list
 * Return: pointer to the first node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = next;
	}

	*head = p;

	return (*head);
}
