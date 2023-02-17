#include <stdio.h>

/**
 *main function output all combination of single digits
 *main function returns o
 */
int main(void)
{
int number;

for (number = 48; number < 58; number++)
{
putchar(number);
if (number != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
