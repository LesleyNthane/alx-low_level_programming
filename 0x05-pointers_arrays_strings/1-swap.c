#include <stdio.h>

/**
 * swap_int - swap integer a and b
 * @a: first integer to be swapped to second integer
 * @b: second integer to be swapped to first integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int temp = *a;

*a = *b;
*b = temp;
}
