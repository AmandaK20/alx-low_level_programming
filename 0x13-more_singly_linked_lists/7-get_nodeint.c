#include "lists.h"

/**
 * get_nodeint_at_index - get the element at the specified index of linked list
 * @head: is the first node of the linked list
 * @index: index of the node to be returned
 * Return: the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;
while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}

