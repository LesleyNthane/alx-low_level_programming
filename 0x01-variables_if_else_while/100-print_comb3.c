#include <stdio.h>

/**
 *main function outputs combination of two digits numbers
 *main function returns 0
 */
int main(void)
{
int num1;
int num2;

for (num1 = 0; num1 < 10; num1++)
{
for (num2 = 0; num2 < 10; num2++)
{
if (num1 != num2 && num1 < num2)
{
putchar('0' + num1);
putchar('0' + num2);
if (num2 + num1 != 17)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
