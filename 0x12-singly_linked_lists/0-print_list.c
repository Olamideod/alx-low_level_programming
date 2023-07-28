#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Function to print all elements of  list_t,
 * @h: points to list.
 *
 * If strings are NULL print [0] (nil).
 * Allowed to use the printf.
 *
 * Return: Number of nodes.
 * @return size_t
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	/* While we have pointers to a list */
	while (h != NULL)
	{
		/* Dereference pointers, and look if strings are null */
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else /* If not, NULL */
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
