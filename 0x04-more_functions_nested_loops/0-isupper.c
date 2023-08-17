#include "main.h"

/** 
 * _issupper  - check if letter is uppercase       
 * @x: the character to be checked
 * Return: 1 for uppercase letter or 0 for any else
 */

int _issupper(int x)
{
    if (x >= 65 && x <= 90)
    {
        return (1);
    }
      return(0);
}
