#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything based on a format string
 * @format: a list of types of arguments passed to the function
 *           c: char
 *           i: integer
 *           f: float
 *           s: char * (if the string is NULL, print (nil) instead)
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
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
{
int str = va_arg(args, int);
char c = (char)str;
if (c == '\0')
{
printf("%s(nil)", separator);
}
else
{
printf("%s%d", separator, str);
break;
}
}
default:
{
	i++;
	continue;
	break;
}
}
separator = ", ";
i++;
}
printf("\n");
va_end(args);
}
