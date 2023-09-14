#include "3-calc.h"
#include<stdio.h>
/**
 * op_add - returns the sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
int result = a + b;
return (result);
}

/**
 * op_sub - returns the difference of a and b
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
int result = a - b;
return (result);
}

/**
 * op_mul - returns the product of a and b
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
int result = a * b;
return (result);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: first integer
 * @b: second integer
 * Return: result of a divided by b
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
int result = a\b;
return (result);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: first integer
 * @b: second integer
 * Return: remainder of a divided by b
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
int result = a % b;
return (result);
}


