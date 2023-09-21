#include "lists.h"

/**
 * _strlen - counts the legnth of string
 * @s: string passed
 * Return: lengnth
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * add_node - function that adds a new node at the beginning of linked list
 * @head: pointer to pointer to the first node
 * @str: string passed to duplicate
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (str != NULL)
	{
		temp->str = strdup(str);
		temp->len = _strlen(temp->str);
	}
	else
	{
		temp->str = strdup("(nil)");
		temp->len = 0;
	}

	temp->next = *head;

	*head = temp;

	return (temp);
}
