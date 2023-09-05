#include "main.h"
#include <string.h>
/**
*This function creates a dynamically allocated copy of a string
*@param str The original string to copy.
*@return A pointer to the dynamically allocated copy.
*/

char *_strdup(char *str)
{
char *copie;
size_t size;
if (str == NULL)
{
return (NULL);
}
size = strlen(str);
copie = (char *)malloc(size + 1);
if (copie != NULL)
{
return (NULL);
}
strcpy(copie , str);
return (copie);
}
