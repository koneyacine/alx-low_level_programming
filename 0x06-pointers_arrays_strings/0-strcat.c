#include "main.h"
/*
Streat function that concatentes two trings  @dest: pointer to destnation input 
*@dest pointer to destenation input 
*Return: pointer to  string @dast* 
*/
char *_strcat(char *dest, char *src)

{
int dest_length = 0 ;
int j= 0 ;
while( dest[dest_length] != '\0')
{
dest_length++ ;
}
while (src[j] != 0)
{
dest[dest_length]= src[j] ;
dest_length++ ;
j ++ ;
}
dest[j+dest_length] = '\0' ;
return (dest) ; 
}
