#include "lists.h"

/**
 * add_node_end - Ajoute un nœud à la fin de la liste.
 * @head: Pointeur vers l'adresse du pointeur de la tête de la liste.
 * @str: Chaîne de caractères à stocker dans le champ "str" du nœud.
 *
 * Return: Pointeur vers le nouveau nœud ajouté ou NULL en cas d'erreur.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
if (!new_node)
{
return (NULL);
}
new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}

new_node->len = 0;
while (str[new_node->len])
{
new_node->len++;
}
new_node->next = NULL;

if (!*head)
{
*head = new_node;
}
else
{
list_t *current = *head;
while (current->next)
current = current->next;
current->next = new_node;
}
return (new_node);
}
