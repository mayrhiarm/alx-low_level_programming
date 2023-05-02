#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * @head: the first node
 * @index: index of the node to return
 * Return: return the nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tmp = head;

	while (tmp && a < index)
	{
		tmp = tmp->next;
		a++;
	}

	return (tmp ? tmp : NULL);
}
