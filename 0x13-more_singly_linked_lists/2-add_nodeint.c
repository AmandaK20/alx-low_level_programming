#include "lists.h"

/**
 * add_nodeint - adds a new node to the linked list
 * @head: is the pointer to first node in the linked list
 * @n:  is the info to be inserted in the new node
 * Return: a pointer to new node or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}

