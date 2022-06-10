#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data of a dlistint_t list
* @head: pointer to head
*
* Return: sum of all the data
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int summ = 0;

	while (tmp != NULL)
	{
		summ += tmp->n;
		tmp = tmp->next;
	}
	return (summ);
}
