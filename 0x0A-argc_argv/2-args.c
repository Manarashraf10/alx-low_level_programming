#include <stdio.h>

/**
 * main - prints all arguments passed
 * @argv: list
 * @argc: int
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	int a = 0;

	while (argc--)
	{
		printf("%s\n", argv[a]);
		a++;
	}

	return (0);
}
