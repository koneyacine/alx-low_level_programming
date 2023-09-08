#include "main.h"

/**
* malloc_checked - Allocate memory using malloc and exit if failed
* @b: The number of bytes to allocate
*
* This function allocates memory using malloc for a specified number of bytes.
* If the allocation fails (malloc returns NULL), the function exits with an
* error code 98.
*
* Return: A pointer to the allocated memory if successful, or NULL on failure.
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
