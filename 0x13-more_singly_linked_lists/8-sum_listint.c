#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * @head: the head node in the linked list
 * Return: resulting sum, return 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum_data = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum_data += temp->n;
		temp = temp->next;
	}

	return (sum_data);
}
