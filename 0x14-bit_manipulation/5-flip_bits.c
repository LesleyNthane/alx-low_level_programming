#include "main.h"

/**
 * flip_bits - Flips the bits of 1st no. but 2nd no.
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int index;
int count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (index = 63; index >= 0; index--)
{
current = exclusive >> index;
if (current & 1)
{
count++;
}
}
return (count);
}
