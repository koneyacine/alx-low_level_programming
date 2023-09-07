#include "main.h"

/**
* _realloc - Reallocates a memory block using malloc and free.
* @ptr: Pointer to the previously allocated memory block.
* @old_size: Size of the old allocated memory block.
* @new_size: Size of the new memory block.
*
* Return: A pointer to the newly allocated memory block, or NULL on failure.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
return (new_ptr);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
if (new_size < old_size)
{
old_size = new_size;
}
memcpy(new_ptr, ptr, old_size);
free(ptr);
return (new_ptr);
}
