#include "lists.h"

/**
 * sum_listint - Calculate the sum of all all data in a listint_t list,
 * @head: First node in the linked list,
 *
 * Return: Return 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
