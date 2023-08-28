#include "lists.h"

/**
 * _strlen - returns the length of the string
 * @s: the string to check the length
 * Return: integer length of string
*/

int _strlen(char *s)
{
int i = 0;

if (!s)
return (0);
while (*s++)
i++;
return (i);
}

/**
 * print_list - function prints all the elements of a linked list
 * @h: pointer to start of the list
 * Return: the size of the list
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
