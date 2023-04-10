#include "main.h"

/**
 * get_bit - gets the value of a bit at an index
 * @n: the value in int
 * @index: the index number
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int value;
if (index > 63)
{
return (-1);
}
value = (n >> index) & 1;
return (value);
}
