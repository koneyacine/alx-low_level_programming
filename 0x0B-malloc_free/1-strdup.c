#include "main.h"
#include <string.h>
/**
* _strdup - Duplicate a string.
* @str: The string to duplicate.
*
* Description:
* This function takes a string `str` as input and creates a dynamically
* allocated copy of it. The copied string is a duplicate of the input string.
*
* Return:
* On success, a pointer to the duplicated string is returned. On failure
* (if memory allocation fails or if `str` is NULL), NULL is returned.
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
if (copie == NULL)
{
return (NULL);
}
strcpy(copie, str);
return (copie);
}
