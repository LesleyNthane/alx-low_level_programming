#include "main.h"

/**
 * binary_to_uint - change bin no.s to int
 * @b: array of chars that has bin number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int index;
unsigned int value = 0;
if (!b)
{
return (0);
}
for (index = 0; b[index]; index++)
{
if (b[index] < '0' || b[index] > '1')
{
return (0);
}
value = 2 * value + (b[index] - '0');
}
return (value);
}
