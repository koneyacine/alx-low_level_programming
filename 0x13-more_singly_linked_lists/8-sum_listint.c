#include "lists.h"

/**
 * sum_listint - returns sum of integers in head
 * @head: pointer to the first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;

for (; head != NULL; head = head->next)
{
sum += head->n;
}
return (sum);
}
