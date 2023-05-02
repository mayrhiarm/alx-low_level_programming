#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - a function that counts the number of unique nodes
 * @head: the head node
 * Return: If the list is not looped - 0, number of unique nodes.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *p, *q;
	size_t m = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	p = head->next;
	q = (head->next)->next;

	while (q)
	{
		if (p == q)
		{
			p = head;
			while (p != q)
			{
				m++;
				p = p->next;
				q = q->next;
			}

			p = p->next;
			while (p != q)
			{
				m++;
				p = p->next;
			}

			return (m);
		}

		p = p->next;
		q = (q->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: the head node
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t m, i = 0;

	m = looped_listint_len(head);

	if (m == 0)
	{
		for (; head != NULL; m++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < m; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (m);
}
