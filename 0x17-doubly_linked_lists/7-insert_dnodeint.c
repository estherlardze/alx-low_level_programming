#include "lists.h"

/**
* insert_dnodeint_at_index - inserts node at nth position
* @h: pointer to pointer to head
* @idx: index
* @n: value to go in new node
*
* Return: the address of the new node, or NULL if it failed
* if it is not possible to add the new node at index idx,
* do not add the new node and return NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new = malloc(sizeof(dlistint_t));
	unsigned int counter = 0;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*h == NULL)
	{
		*h = new;
		return (*h);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (tmp != NULL)
	{
		if (counter == idx && idx != 0)
		{
			new->next = tmp;
			new->prev = tmp->prev;
			tmp->prev->next = new;
			tmp->prev = new;
			return (new);
		}
		counter++;
		tmp = tmp->next;
	}
	if (counter == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
