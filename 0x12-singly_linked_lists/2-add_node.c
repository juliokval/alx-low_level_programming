#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *big;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (big == NULL)
		return (NULL);

	big->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	big->len = nchar;
	big->next = *head;
	*head = big;

	return (*head);
}
