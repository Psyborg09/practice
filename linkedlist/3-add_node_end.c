 #include "lists.h"


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *temp;
	temp = *head;

	new_node = malloc(sizeof(list_t));
	if(!new_node)
		return NULL;
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	
	if(!(*head))
		*head = new_node;
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
