#include "function_pointers.h"

/**
 * print_name - function prints a name
 * @name: the name
 * @f: the printing function pointer
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	(*f)(name);
}
