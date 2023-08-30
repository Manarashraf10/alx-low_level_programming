#include "lists.h"

/**
 * *add_nodeint - adds a new node at the begining of a linked list
 * @head: pointer to the first node
 * @n: the node field
 * Return: new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_head;
new_head = malloc(sizeof(listint_t));

if (!head || !new_head)
return (NULL);
new_head->next = NULL;
new_head->n = n;
if (*head)
new_head->next = *head;
*head = new_head;
return (new_head);
}
