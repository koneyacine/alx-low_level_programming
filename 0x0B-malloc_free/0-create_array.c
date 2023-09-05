#include "main.h"
/**
* create_array - Creates an array of characters initialized with
* a given character.
* @size: Size of the array to create.
* @c: Character with which to initialize each element of the array.
* Return: A pointer to the newly allocated array, or NULL on failure.
*/
char *create_array(unsigned int size, char c)
{	
char *array;
{
if (size == 0)
{
return (NULL);
}
array = (char *)malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
for (unsigned int i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
