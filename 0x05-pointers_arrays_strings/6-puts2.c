#include "main.h"
#include <string.h>
/**
* puts2 - Prints every other character of a string.
* @str: Pointer to the string.
*/
void puts2(char *str)
{
long int i = 0;
while (str[i] != '\0' && str[i + 1] != '\0')
{
_putchar(str[i]);
i += 2;
}
if (strlen(str) >= 150)
{
_putchar('.');
}
_putchar('\n');
}
