nclude "main.h"
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: An array of integers.
 * @n: The number of elements in the array.
 *
 * Return: Nothing (void).
 */
void reverse_array(int *a, int n)
{
int tem ;
int start ;
int end = n-1 ;
while (start < end )
temp = a[start] ;
a[start] = a[end];
a[end] = temp ;
start++ ;
end--;
}
}

