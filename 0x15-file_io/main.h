#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define READ_BUF_SIZE 1024


int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int creat_file(const char *filename, char *text_content);


#endif
