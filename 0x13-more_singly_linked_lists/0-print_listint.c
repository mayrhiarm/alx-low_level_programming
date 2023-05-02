#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: listint_t to print
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}
	return (numb);
}
