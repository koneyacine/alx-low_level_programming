#include "main.h"
/**
* _strcmp - Compare two strings.
* @s1: Pointer to the first string.
* @s2: Pointer to the second string.
* Return: An integer less than, equal to, or greater than zero if the first
*         string is found, respectively, to be less than, to match, or be
*         greater than the second string.
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
s1++;
s2++;
return (*s2 - *s2);
}
}
