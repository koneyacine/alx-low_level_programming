#include "main.h"
/**
* _strcpy - Copies the string pointed to by src to dest.
* @dest: Pointer to the destination buffer.
* @src: Pointer to the source string.
* Return: The pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
char *original_dest = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0'; // Add the null-terminating byte
return original_dest;
}
