#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the standard output
 * @filename: File to be read
 * @letters: the letters to be read
 * Return: the actual number of letters read and printed
 * 0 when filename is NULL or the function failsssize_t read_textfile(const char *filename, size_t letters)
{
int file_descriptor;
char *buffer;
ssize_t bytes_read, bytes_written;
if (!filename || letters == 0)
return (0);
buffer = malloc(sizeof(char) * letters);
if (!buffer)
return (0);
file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
return (0);
bytes_read = read(file_descriptor, buffer, letters);
if (bytes_read == -1)
return (0);
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1)
return (0);
close(file_descriptor);
free(buffer);
return (bytes_written);
*/
