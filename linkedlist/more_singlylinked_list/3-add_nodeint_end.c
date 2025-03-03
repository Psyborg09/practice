#include "lists.h"


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp = *head;
	new_node = malloc(sizeof(listint_t));
	if(!new_node)
		return NULL;

	new_node->n = n;
	new_node->next = NULL;

	if(!*head)
	{
		*head = new_node;
	}
	else
	{
		while(temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->next = NULL;
	}
	return new_node;
}
