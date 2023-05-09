#include "main.h"

/**
 * *_strstr - a function that locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring, or
 * NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *p;

	p = strstr(haystack, needle);

	return (p);
}

