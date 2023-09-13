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
if (size <= *end)
{
return (-1);
}
while (array <= end)
{
if (cmp(array))
{
return (i);
}
array++;
i++;
}
}
