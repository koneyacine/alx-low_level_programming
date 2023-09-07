#include "main.h"
/*
* malloc_cheked function that check 
* b size of memory allocated
* ptr pointer to the adress memory allocated 
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
