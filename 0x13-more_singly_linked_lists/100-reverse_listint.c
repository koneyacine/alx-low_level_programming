#include "lists.h"

/**
 * reverse_listint - reverses a linked list of integers
 * @head: pointer to pointer to the first node
 *
 * Return: pointer to the new head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *current = NULL, *next = NULL;

if (!head || !*head)
	return (NULL);

current = *head;
*head = NULL;

while (current)
{
next = current->next;
current->next = prev;
prev = current;
current = next;
}

*head = prev;
return (*head);
}
