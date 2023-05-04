#include "main.h"
#include <unistd.h>
/**
 * _putchar -  writes c to the output stream at the current position
 * @c: The character to print
 * Return: On success 1.
 * If error, return -1 and set errno.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
