#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Imprime un caractère.
 * @args: Liste d'arguments variable.
 * @separator: Séparateur à utiliser.
 */

void print_char(va_list args, char *separator)
{
printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_int - Imprime un entier.
 * @args: Liste d'arguments variable.
 * @separator: Séparateur à utiliser.
 */

void print_int(va_list args, char *separator)
{
printf("%s%d", separator, va_arg(args, int));
}

/**
 * print_float - Imprime un flottant.
 * @args: Liste d'arguments variable.
 * @separator: Séparateur à utiliser.
 */

void print_float(va_list args, char *separator)
{
printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_string - Imprime une chaîne de caractères.
 * @args: Liste d'arguments variable.
 * @separator: Séparateur à utiliser.
 */

void print_string(va_list args, char *separator)
{
char *str = va_arg(args, char *);
if (str == NULL)
{
printf("%s(nil)", separator);
}
else
{
printf("%s%s", separator, str);
}
}

/**
 * print_all - Imprime une liste d'arguments basée sur un format.
 * @format: Format de la liste d'arguments.
 */

void print_all(const char * const format, ...)
{
va_list args;
char *separator = "";
unsigned int i = 0;
va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
print_char(args, separator);
break;
case 'i':
print_int(args, separator);
break;
case 'f':
print_float(args, separator);
break;
case 's':
print_string(args, separator);
break;
default:
break;
}
separator = ", ";
i++;
}
printf("\n");
va_end(args);
}
