#include "main.h"
/*
Streat function that concatena @dest: pointer to destnation input 
*@arc: pointer to source input 
*Return: pointer to resulting string @dast* 
*char *_strcat(char *dest, char *src)
*/
{
int dest_length = 0 ;
int j= 0 ;
while( dest[dest_length] != '\0')
{
dest_length++ ;
}
while (str[j] != 0)
{
dest[dest_length]= src[j] ;
dest_length++ ;
j ++ ;
}
dest[j+dest_length1] = '\0' ;
return (dest) ; 
}
