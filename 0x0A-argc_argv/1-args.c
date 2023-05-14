#include <stdio.h>

/**
 * main - print number of arguments passed
 * @argc: the number of command line arguments
 * @argv: pointer to an array containing the program command line arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
