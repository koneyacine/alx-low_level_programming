#include "main.h"
/**
 * Calcule la valeur absolue d'un nombre.
 * Cette fonction prend un nombre en entrée et renvoie sa valeur absolue.
 * @param c Le nombre dont vous voulez calculer la valeur absolue.
 * @return La valeur absolue de 'c'.
 */
int _abs(int c)
{
if (c < 0)
{
int abs_val;
abs_val = c * -1;
return (abs_val);
}
return (c);
}
