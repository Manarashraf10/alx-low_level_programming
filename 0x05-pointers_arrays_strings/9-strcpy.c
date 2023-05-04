#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: pointer to `dest`
*/

char *_strcpy(char *dest, char *src)
{
	/*copy src into dest*/
	strcpy(dest, src);
	printf("strcpy(dest, src): %s\n", dest);

	return (dest);
}
