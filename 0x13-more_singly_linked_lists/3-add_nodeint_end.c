#include "lists.h"

/**
 * add_nodeint_end - Appends a node to the end of the list
 * @head: Pointer to the first node
 * @n: Value for the new node
 *
 * Return: Pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *newNode = malloc(sizeof(listint_t));
listint_t *currentNode;

if (!head || !newNode)
{
return (NULL);
}
newNode->next = NULL;
newNode->n = n;
if (!*head)
{
*head = newNode;
}
else
{
currentNode = *head;
while (currentNode->next)
{
currentNode = currentNode->next;
}
currentNode->next = newNode;
}

return (newNode);
}
