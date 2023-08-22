#include "main.h"
/**
* print_rev - Prints a string in reverse.
* @s: Pointer to the string.
*/
void print_rev(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
int i = length - 1;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
