#include "lists.h"

/**
 * print_list - function that prints all the elements of a linked list
 * @h: pointer to the first node
 * Return: number of printed nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	int len;

	while (h != NULL)
	{
		len = h->len;

		if (h->str == NULL)
		{
			h->str = "(nil)";
			len = 0;
		}

		printf("[%d] %s\n", len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
