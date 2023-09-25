#include "lists.h"

/**
 * pop_listint - Removes the head node of a list and returns its value
 * @head: Pointer to a pointer to the first node
 *
 * Return: Value of the popped node
 */
int pop_listint(listint_t **head)
{
listint_t *next_node;
int value;

if (!head || !*head)
	return (0);

next_node = (*head)->next;
value = (*head)->n;
free(*head);
*head = next_node;
return (value);
}
