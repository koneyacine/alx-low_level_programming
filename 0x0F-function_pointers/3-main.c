#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - This is the main function of the program.
 *
 * It takes command-line arguments, performs a calculation based on the
 * provided operation, and prints the result.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 on success, an error code on failure.
 */

int main(int argc, char *argv[])
{
int num1, num2;
int (*opration)(int, int);
if (argc != 4)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
opration = get_op_func(argv[2]);
if (opration == NULL)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return (99);
}
result = opration(num1, num2);
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return (0);
}
