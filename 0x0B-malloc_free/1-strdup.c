#include "main.h"
#include <string.h>
/**
*This function creates a dynamically allocated copy of a string
*/

char *_strdup(char *str)
{
size_t size;
if (str == NULL)
{
return (NULL);
}
size = strlen(str);
char *copie = (char *)malloc(size);
if (copie == NULL)
{
strcpy(copie , str);
}
return (copie);
}
