#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14, repeated 10 times, followed by a new line.
 */
void more_numbers(void)
{
    int i, j;

    for (i = 0; i < 10; i++) // Repeat 10 times
    {
        for (j = 0; j <= 14; j++) // Print numbers from 0 to 14
        {
            if (j >= 10) // For numbers greater than or equal to 10, print both digits
            {
                _putchar('0' + j / 10);
            }
            _putchar('0' + j % 10);
        }
        _putchar('\n');
    }
}

