#include "lists.h"

/**
 * print_listint - prints a linked list
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h)
{
int num = h->n;
if (num < 0)
{
_putchar('-');
num = -num;
}
if (num == 0)
{
_putchar('0');
}
else
{
print_positive_number(num);
}
_putchar('\n');
h = h->next;
i++;
}
return (i);
}

/**
 * print_positive_number - prints a positive integer using _putchar
 * @num: the positive integer to print
 */
void print_positive_number(int num)
{
if (num / 10 != 0)
{
print_positive_number(num / 10);
}
_putchar(num % 10 + '0');
}
