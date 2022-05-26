#include "lists.h"
/**
<<<<<<< HEAD
<<<<<<< HEAD
* print_list - function that prints all the elements of a list_t list
* @h: singly linked list
* Return: The number of nodes
=======
* print_list - prints all the elements of a list_t list.
* @h: linked list.
* Return: number of elements in the list.
>>>>>>> bd0eac0b58f1771d7e3f6030b522126eb5374ca6
*/
=======
 * print_list - function that prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

>>>>>>> b4fba192da7b53c147814743765a6c386698b253
size_t print_list(const list_t *h)
{
	size_t pop;

	pop = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		pop++;
	}
	return (pop);
}
