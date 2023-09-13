#include "function_pointers.h"

/**
* int_index - earch the index of an intiger
*@array: pointere to an array
*@size: length of the array
*
*Return: Nothing
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int *end = size - 1 + array;
int i = 0;
if (size <= 0 || array == NULL || cmp == NUL)
{
return (-1);
}
while (i < size)
{
if (cmp(array[i]))
{
return (i);
}
i++;
}
}
