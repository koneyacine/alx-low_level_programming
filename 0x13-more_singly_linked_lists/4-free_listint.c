#include "lists.h"

/**
 * free_listint - frees a list of integeres
 * @head: pointer to the first node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *neud;

while (head)
{
neud = head;
head = head->next;
free(neud);
}
}
