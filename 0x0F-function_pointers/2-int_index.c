#include "function_pointers.h"

/**
* int_index - Search the index of an integer in an array.
* @array: Pointer to an array of integers.
* @size: The number of elements in the array.
* @cmp: A pointer to a function that checks for a match.
*
* Return: The index of the first element for which cmp function
*         doesn't return 0. If no element matches, return -1.
*         If size is less than or equal to 0, return -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
