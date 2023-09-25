#include "lists.h"

/**
 * add_nodeint - Adds a node to the beginning of a list
 * @head: Pointer to the first node
 * @n: Value for the new node
 *
 * Return: Pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode = malloc(sizeof(listint_t));

if (!head || !newNode)
{
return (NULL);
}
newNode->next = NULL;
newNode->n = n;

if (*head)
newNode->next = *head;

*head = newNode;
return (newNode);
}
