#include "lists.h"
/**
 * dlistint_t - add node in the beginning
 * @head: adress the pointer of current head node
 * @n: int field of new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint *new = malloc(sizeof(dlinstint));

	if (!head || !new)
		return (new ? free(new), NULL : NULL);
	new->n = n;
	new->prev = NULL;
	if(!*head)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
