#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int c1, c2;

	c1 = 0;
	/*find the size of dest array*/
	while (dest[c1])
		c1++;

	/*iterate through src array value without the null byte*/
	for (c2 = 0; src[c2]; c2++)
		/*append src[c2] to dest[c1] while overwriting the null byte in dest*/
		dest[c1++] = src[c2];

	return (dest);
}
