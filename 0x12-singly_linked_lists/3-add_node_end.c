#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Add new node to the end of the linked list
 * @head: Double pointer at the list_t list
 * @str: str to place in new node
 *
 * Return: Address of new ele;4ment, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
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
