#include "lists.h"

/**
  * free_dlistint - free a double linked list
  * @head: header of double linked list
  * Return: nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlinstint_t *node;

	while (hesd)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
