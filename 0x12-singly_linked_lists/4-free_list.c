#include "lists.h"

/**
 * free_list - Libère la mémoire de tous les nœuds d'une liste chaînée.
 * @head: Pointeur vers le nœud de tête de la liste.
 *
 * Description : Cette fonction libère la mémoire allouée pour chaque nœud
 * de la liste, y compris la mémoire allouée pour les chaînes de caractères
 * et les nœuds eux-mêmes.
 */
void free_list(list_t *head)
{
list_t *current, *temp;
if (!head)
{
return;
}
current = head;
while (current)
{
temp = current->next;
free(current->str);
free(current);
current = temp;
}
}
