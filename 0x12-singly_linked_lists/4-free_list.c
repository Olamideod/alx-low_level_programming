#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Function that frees singly linked list,
 * @head: points to the singly linked list.
 *
 * Return: return 0.
 *
 */

void free_list(list_t *head)
{
	list_t *temp_variable;
	/* assign temp_variable to the head */
	temp_variable = head;

	/* look hear if head is NULL if yes the list is empty and we just Return */
	while (head != NULL)
	{
		/* Save head in a temp variable */
		temp_variable = head;
		/* allow the head points to the next node on list */
		head = head->next;
		/* free the string */
		free(temp_variable->str);
		/* Free temp_variable and head just point the rest of the list */
		free(temp_variable);
	}
	/* free head */
	free(head);
}
