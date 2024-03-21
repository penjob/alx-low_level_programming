#include "lists.h"
/**
 * dlistint_len - print doubly linked list len
 * @h: adress of head node
 * Return: size of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
