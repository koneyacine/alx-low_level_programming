#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list safely.
 * @h: pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *h)
{
size_t n = 0;
const listint_t *current = h;
const listint_t *list[1024];
size_t i;

while (current != NULL)
{
int found = 0;

for (i = 0; i < n; i++)
{
if (current == list[i])
{
found = 1;
break;
}
}

if (found)
{
printf("-> [%p] %d\n", (void *)current, current->n);
return (n);
}

list[n++] = current;
printf("[%p] %d\n", (void *)current, current->n);
current = current->next;
}

return (n);
}
