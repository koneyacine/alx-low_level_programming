#include "main.h"
#include <limits.h>
/**
* _atoi - Converts a string to an integer.
* @s: The input string.
* Return: The converted integer.
*/
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;
while (s[i] != '\0')
{
if (s[i] == '-') 
{
sign *= -1;
}
if (s[i] >= '0' && s[i] <= '9')
{
int digit = s[i] - '0';
if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
{
if (sign == 1)
{
return INT_MAX;
}
else
{
return INT_MIN;
}
}
result = result * 10 + digit;
if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
{
break;
}
}
i++;
}
return result * sign;
}
