#include "lists.h"

/**
  * print_dlistint - function that prints all the elements of a distlint-t list
  * @h: the head of a dlistint_t list.
  *
  * Return: The number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n, h->n);
	}

	return (nodes);
}
