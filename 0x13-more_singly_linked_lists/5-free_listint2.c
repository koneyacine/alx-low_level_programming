#include "lists.h"

/**
 * free_listint2 - Frees a list of integers and sets the head pointer to NULL
 * @head: Address of a pointer to the first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *current, *temp;

if (!head)
	return;

for (current = *head; current; current = temp)
{
temp = current->next;
free(current);
}

*head = NULL;
}
