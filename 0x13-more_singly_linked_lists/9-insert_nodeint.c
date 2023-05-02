#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  a function that inserts a new node
 * @head: the first node in the list
 * @idx: index of the new node added
 * @n: the data to insert in the new node
 * Return: the address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int e;
	listint_t *f;
	listint_t *temp = *head;

	f = malloc(sizeof(listint_t));
	if (!f || !head)
		return (NULL);

	f->n = n;
	f->next = NULL;

	if (idx == 0)
	{
		f->next = *head;
		*head = f;
		return (f);
	}

	for (e = 0; temp && e < idx; e++)
	{
		if (e == idx - 1)
		{
			f->next = temp->next;
			temp->next = f;
			return (f);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
