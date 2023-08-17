#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch;

	if (ch >= 97 && ch <= 122)
		putchar(ch);
	putchar('\n');

	return (0);
}
