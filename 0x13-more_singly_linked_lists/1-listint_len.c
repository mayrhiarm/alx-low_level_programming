#include "lists.h"
/**
 * listint_len - a function that returns the number of elements
 * @h: listint_t to traverse
 * Return: the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h != NULL)
	{
		numb++;
		h = h->next;
	}

	return (numb);
}
