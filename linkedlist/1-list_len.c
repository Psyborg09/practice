#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t next_node = 0;

	while (h)
	{
		h = h-> next;
		next_node++;
	}
	return next_node;
}
