#include "lists.h"
/**
 * pop_listint - removes the head node of linked list
 * @head: pointer to first node
 * Return: the data of the head node
*/
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);
	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
