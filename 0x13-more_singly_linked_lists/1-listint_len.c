#include "lists.h"

/**
 * listint_len - determine the length of linked list
 * @h: pointer to the start of list
 * Return: the length
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
