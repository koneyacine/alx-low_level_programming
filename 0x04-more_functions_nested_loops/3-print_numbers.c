#include "main.h"


/**
 * print_number - Prints the numbrs from o to 9 folowed by a new line.
 */
void print_numbers(void)
{
	int i;
	
	for (i = 0 ;i <=  9; i++)
	{
	_putchar( i + '0' );
	}
	_putchar('\n');
}
