#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all numbers of base 16
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int digit = 0;
	char ch = 'a';

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + '0');
		digit++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}



