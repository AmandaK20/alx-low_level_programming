#include "lists.h"

/**
 * listint_len -  measure the length of the linked list
 * @h: linked list, listint_t
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h)
{
num++;
h = h->next;
}
return (num);
}
