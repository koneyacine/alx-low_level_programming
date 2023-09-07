#include "main.h"
/**
* string_nconcat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
* @n: The number of bytes from s2 to concatenate.
*
* Return: A pointer to the concatenated string or NULL on failure.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2;
char *concat;
unsigned int i;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
{
n = len2;
}
concat = malloc(len1 + n + 1);
if (concat == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
concat[i] = s1[i];
}
for (i = 0; i < n; i++)
{
concat[len1 + i] = s2[i];
}
concat[len1 + n] = '\0';
return (concat);
}
