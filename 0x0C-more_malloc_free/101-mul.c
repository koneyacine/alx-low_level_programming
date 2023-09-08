#include "main.h"

/**
* is_digit - Check if a string contains only digits.
* @str: The string to check.
* Return: 1 if the string contains only digits, 0 otherwise.
*/
int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}

/**
* multiply - Multiply two strings representing numbers.
* @num1: The first number as a string.
* @num2: The second number as a string.
* Return: The result of the multiplication as a string.
*/
char *multiply(char *num1, char *num2)
{
int len1 = 0;
int len2 = 0;
int i;
int j;
int k;
char *result;
int carry;
int n1;
int n2 ;
int product;
while (num1[len1])
{
len1++;
}
while (num2[len2])
{
len2++;
}
result = malloc(sizeof(char) * (len1 + len2 + 1));
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < len1 + len2; i++)
{
result[i] = '0';
}
result[i] = '\0';
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
n1 = num1[i] - '0';
for (j = len2 - 1, k = i + len2; j >= 0; j--, k--)
{
n2 = num2[j] - '0';
product = (result[k] - '0') + (n1 * n2) + carry;
carry = product / 10;
result[k] = (product % 10) + '0';
}
if (carry > 0)
result[i] = (result[i] - '0'+ carry) + '0';
}
return (result);
}

int main(int argc, char *argv[])
{
if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
return (98);
}
result = multiply(argv[1], argv[2]);
if (result == NULL)
{
printf("Error\n");
return (98);
}
printf("%s\n", result);
free(result);
return (0);
}


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
