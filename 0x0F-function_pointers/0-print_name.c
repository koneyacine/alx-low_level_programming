#include "function_pointers.h"
/*
*print_name - prints a name
*@name: the name that wil be prinred
*@f the piontere to a function

*Return : void
*/ 
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
