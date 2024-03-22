#include "lists.h"

/**
  * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
  * @head: header of double linked list
  * Return: the sum of all nodes
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
