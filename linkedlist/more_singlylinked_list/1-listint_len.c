#include "lists.h"


size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while(h)
	{
		node++;
		h = h->next;
	}
	return node;
}
