#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint list, even if it has a loop
 *
 * @h: address of pointer to the head of the list
 *
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loopnode;
	size_t len;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	for (loopnode = (*h)->next; loopnode != NULL; loopnode = loopnode->next)
	{
		if (loopnode == loopnode->next)
			break;
	}

	for (len = 0; ((*h != loopnode) || loop) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == loopnode && loop)
		{
			if (loopnode == loopnode->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}

