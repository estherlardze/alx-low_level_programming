#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at given index of a list
 * @head: pointer to head of the list
 * @index: index to delete from, starting from 0
 * Return: 1 on success or -1 on failure
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter;
	dlistint_t *tmp;

	if (*head == NULL || head == NULL)
	return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp), tmp = NULL;
		return (1);
	}
	counter = 1, tmp = (*head)->next;
	if (tmp)
	{
		while (tmp->next)
		{
			if (index == counter)
			{
				tmp->prev->next = tmp->next;
				tmp->next->prev = tmp->prev;
				free(tmp), tmp = NULL;
				return (1);
			}
			counter++, tmp = tmp->next;
		}
	}
	if (tmp && index == counter)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}
	return (-1);
}
