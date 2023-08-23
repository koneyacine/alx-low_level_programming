#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
int dest_length = 0 ;
int j= 0 ;
while( dest[dest_length] != '\0')
{
dest_length++ ;
}
while (src[j] != 0 && n >0)
{
dest[dest_length]= src[j] ;
dest_length++ ;
j ++ ;
n-- ;
}
dest[j+dest_length] = '\0' ;
return (dest) ;
}
