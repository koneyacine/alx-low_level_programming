#include "lists.h"

/**
 * list_len - determines length of linked list
 * @h: pointer to first node
 *
 * Return: size of list
 */

size_t list_len(const list_t *h)
{

size_t compteur = 0;

while (h != NULL)
{
h = h->next;
i++;
}
return (compteur);
}
