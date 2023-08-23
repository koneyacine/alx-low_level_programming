#include "main.h"
char *_strcat(char *dest, char *src)
{
char *c[]= "" ;
while( *dest != '\0')
{
c+=*dest ;
}
c+= *src ;
retuern (*c) ; 
}
