#include "lists.h"

/**
 * listint_len - The numbers of all element in linked listint_t list,
 *
 * @h: Pointer to head,
 *
 * Return: Return 0.
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	h = h->next;
		count++;
	}
	return (count);
}
