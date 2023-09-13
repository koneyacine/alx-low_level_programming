#include "function_pointers.h"

/**
*array_iterator - function that call action on evry element of 
*array
*@ array: pointere to the array
*@size: length of the array
* Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *en = array + size -1;
if (array && size && action)
{
while(array <= en)
{
action(*array++);
}
}
}
