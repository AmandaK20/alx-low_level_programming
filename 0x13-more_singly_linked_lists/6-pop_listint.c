#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: is the pointer to the head node of the linked list
 * Return: the head node's deleted data or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;
if (!head || !*head)
return (0);
num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (num);
}

