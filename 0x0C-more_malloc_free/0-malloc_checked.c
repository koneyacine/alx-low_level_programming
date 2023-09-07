#include "main.h"
/*
* malloc_cheked function that allocate memory using
* malloc and exit if failed
*@b :int
* return : pointeur to the allocated memory or NULL
*/

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
