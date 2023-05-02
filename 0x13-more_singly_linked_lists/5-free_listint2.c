#include "lists.h"

/**
 * free_listint2 - frees list of integers in a linked list2
 * @head: is the linked list2, listint_t to be frees
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
return;
while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}

