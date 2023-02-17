#include <stdio.h>

/**
 * main function outputs singlr digits in base 10
 *main function returns 0
 */
int main(void)
{
int number;

for (number = 0; number < 10; number++)
{
putchar((number % 10) + '0');
}
putchar('\n');
return (0);
}
