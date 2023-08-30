#include "lists.h"
/**
 * free_listint2 - frees list
 * @head: pointer to first node
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *node, *next_node;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		next_node = node;
		node = node->next;
		free(next_node);
	}
	*head = NULL;
}
