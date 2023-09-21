#include "lists.h"

/**
 * list_len - function that returns the numbers of elements in a linked list
 * @h: pointer to first node
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
