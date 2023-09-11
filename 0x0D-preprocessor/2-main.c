#include<stdio.h>
/**
* main - is the function.
*
* It uses the __FILE__ macro to get the name of the current source file
* and prints it to the standard output. The function returns 0.
*
* Return : 0 on success.
*/

int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
