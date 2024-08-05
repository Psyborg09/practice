#include "lists.h"




int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int data;
	if (!head)
		return 0;
	else
	{
		temp = *head;
		*head = (*head)->next;
		data = (temp)->n;
		free(temp);
		return (data);
	}
}
