#include "lists.h"

/**
 * print_listint - Prints out all elements in the linked lists,
 * @h: linked list for type listint_t to be printed,
 *
 * Return: Return 0.
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
