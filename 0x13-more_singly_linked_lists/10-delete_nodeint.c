#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index -  a function that deletes the node at index
 * @head: the first element in the list
 * @index: index to delete
 * Return: 1 (Succeeded), or -1 (Failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *n = NULL;
	unsigned int p = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (p < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		p++;
	}


	n = tmp->next;
	tmp->next = n->next;
	free(n);

	return (1);
}
