#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
/**
 * struct listint_s - declaration that defines a physically grouped linked list
 * @next: is a function that points next node
 * @n: is an integer
=======
/** 
 * struct listint_s - declaration that defines a physically grouped linked list 
 * @next: function that points next node
 * @n: is the integer
>>>>>>> 995a31938df86ff995ce628caeb5e520f60a791c
 */
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

#endif
