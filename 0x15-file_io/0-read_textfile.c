#include "main.h"
/**
 * read_textfile - reads text file
 * @filename: the file to read
 * @letters: number of letters to read and print
 * Return: number of letters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *fptr;

if (!filename || !letters)
return (0);
fptr = fopen("filename", "r");
if (fptr == NULL)
return (0);
while ((letters = fgetc(fptr)) != EOF)
putchar(letters);
fclose(fptr);
}
