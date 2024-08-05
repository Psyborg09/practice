#include "lists.h"



listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        unsigned int i;
        listint_t *temp = NULL, *new_node;
        temp = *head;

        new_node = malloc(sizeof(listint_t));
        if(!new_node)
                return NULL;

        new_node->n = n;
        new_node->next = NULL;

        if (!*head)
                return NULL;
        if (idx == 0)
        {
                new_node->next = *head;
                *head = new_node;
                return new_node;
        }
        
        for(i = 0; temp && i < (idx -  1); i++)
        {
		temp = temp->next;
	}

        if (!temp || !temp->next)
	{
		free(new_node);
		return NULL;
	}
        new_node->next = temp->next;
        temp->next = new_node;
        return new_node;
}

