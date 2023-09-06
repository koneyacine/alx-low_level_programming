#include "main.h"
/**
* str_concat - Concatenates two strings.
*
* This function concatenates two input strings and returns a dynamically
* allocated new string containing the result.
*
* @s1: The first input string.
* @s2: The second input string.
*
* Return: A pointer to the resulting string or NULL if memory allocation fails.
*/
char *str_concat(char *s1, char *s2)
{
size_t len2;
size_t len1;
if (s1 == NULL && s2 == NULL)
{
return (NULL);
}
if (s1 == NULL)
{
len1 = 0;
}
else
{
len1 = strlen(s1);
}
if (s2 == NULL)
{
len2 = 0;
else
{
len2 = strlen(s2);
}
char *result = (char *)malloc(len1 + len2 + 1);
if (result == NULL)
{
return (NULL);
}
strcpy(result, s1);
strcat(result, s2);
return (result);
}
