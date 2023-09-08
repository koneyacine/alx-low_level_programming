#include "main.h"

/**
* function_name - One-line description
* @parameter1: Description of parameter 1
* @parameter2: Description of parameter 2
*
* Longer description (if needed) that provides more details
* about the function and its behavior.
*
* Return: Description of the return value (if any)
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
