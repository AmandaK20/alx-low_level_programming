#include "main.h"
#include <unistd.h>

/**
 * _putchar - function appends the src string to the dest string
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

