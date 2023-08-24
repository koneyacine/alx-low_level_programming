#include "main.h"
/**
* Copie jusqu'à n caractères de la source vers la destination,
* en remplissant avec des zéros nuls si nécessaire.
* @param dest Pointeur vers la destination.
* @param src Pointeur vers la source.
* @param n Nombre maximal de caractères à copier.
* @return Pointeur vers la destination.
*/
char *_strncpy( char *dest, char *src, int n)
{
int i =0 ;
while (i < n && src[i] != '\0')
{
dest[i]=src[i] ;
i++ ;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest );
}
