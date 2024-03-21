#include "lists.h"

/**
  * get_dnodeint_at_index - get nth node of a dlistint_t linked list
  * @head: header of double linked list
  * @index: index of the node, starting from 0
  * Return: a address of nth node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
