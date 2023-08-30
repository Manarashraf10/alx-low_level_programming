#include "lists.h"
/**
 * free_listint - frees linked list
 * @head: pointer to linked list
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		head = node;
		head = head->next;
		free(node);
	}
}
