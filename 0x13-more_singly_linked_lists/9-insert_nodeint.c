#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at the specified index
 * @head: pointer to pointer to the first node
 * @idx: index at which to insert the new node
 * @n: value to be stored in the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current, *new_node;
unsigned int i;

if (!head)
	return (NULL);

new_node = malloc(sizeof(listint_t));
if (!new_node)
	return (NULL);

new_node->n = n;
new_node->next = NULL;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

current = *head;
for (i = 0; current && i < idx - 1; i++)
{
current = current->next;
}

if (!current)
{
free(new_node);
return (NULL);
}

new_node->next = current->next;
current->next = new_node;

return (new_node);
}
