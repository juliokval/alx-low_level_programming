#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes the node at index index of a 
  *dlistint_t linked list
  * @head: a pointer to the head of the dlistint_t
  * @index: the index of the node to delete
  *
  * Return: 1 if succeeded, -1 if it failed
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmp->prev->next = tmp->prev;
	}

	free(tmp);
	return (1);
}
