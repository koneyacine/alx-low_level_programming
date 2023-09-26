#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds a loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: address of node where loop starts/returns, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

if (head == NULL)
	return (NULL);

while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
}

return (NULL);
}

