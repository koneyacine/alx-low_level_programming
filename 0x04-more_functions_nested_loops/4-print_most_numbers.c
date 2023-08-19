#include "main.h"

/**
 * print_numbers - Print the numbers since 0 up to 9
 * return: The numbers since 0 up to 9
 */

void print_numbers(void)

{

        int i;

        for (i = 0; i <= 9; i++)
        {
		if (i != 2 && i	!= 4)
		{
       			 _putchar(i + '0');
       		 }
	}

        _putchar('\n');
}
