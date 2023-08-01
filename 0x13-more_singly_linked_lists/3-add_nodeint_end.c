#include "lists.h"

/**
 * add_nodeint_end - Adds the node at the end of a linked list,
 * @head: Pointers to the first element in  list,
 * @n: data to input in the new element,
 *
 * Return: Pointers to the new node, or NULL if it failed.
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
