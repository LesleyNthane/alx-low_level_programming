#include "main.h"

/**
 * clear_bit - clears the bit given by index
 * @n: pointer to the number to change
 * @index: index of the loop
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
*n = (~(1UL << index) & *n);
return (1);
}
