#include "lists.h"

/**
 * listint_len - Return the numbers of elements in the linked lists,
 * @h: Linked list for type listint_t to traverse,
 *
 * Return : Return 0.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
