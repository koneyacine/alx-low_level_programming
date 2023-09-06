#include "main.h"
/**
* Concatenates two strings of characters and returns a pointer to the resulting string.
* @param s1 The first string of characters.
* @param s2 The second string of characters to concatenate to the first one.
* @return A pointer to the resulting string (dynamically allocated) or NULL in case of failure.
*/
char *str_concat(char *s1, char *s2)
{
size_t len1 = strlen(s1);
size_t len2 = strlen(s2);
char *result = (char *)malloc(len1 + len2 + 1);
if (result == NULL)
{
return (NULL);
}
strcpy(result, s1);
strcat(result, s2);
return (result);
}
