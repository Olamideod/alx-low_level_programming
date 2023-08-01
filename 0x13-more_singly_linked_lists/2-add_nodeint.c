#include "lists.h"

/**
 * add_nodeint - Adds new node at the beginning of the linked list,
 * @head: Pointers to the first node in the list,
 * @n: data to input in the new node,
 *
 * Return: Pointer to the new node, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
