#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
unsigned int index = 1;
char *c = (char *) &index;

return (*c);
}
