#include "lists.h"

/**
 * listint_len - determines length of linked list
 * @h: pointer to first node
 *
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{

size_t compteur = 0;

while (h != NULL)
{
h = h->next;
compteur++;
}
return (compteur);
}
