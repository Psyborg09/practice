#include "lists.h"



listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	if (!head)
	{
		return NULL;
	}
	else
	{
		while(head)
		{
			if (count == index)	
				return head;
			head = head->next;
			count++;
		}
	}
	return head;
}
