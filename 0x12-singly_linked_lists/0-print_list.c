#include "lists.h"

/**
 * print_list - function that prints all the elements of a linked list
 * @h: pointer to the first node
 * Return: number of printed nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;
	int len;

	i = 0;

	while (h != NULL)
	{
		len = h->len;

		if (h->str == NULL)
			len = 0;
		printf("[%d] %s\n", len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
