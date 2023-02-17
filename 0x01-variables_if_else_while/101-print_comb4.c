#include <stdio.h>
#include <stdlib.h>

/**
 *main function outputs combination of three digits
 *main function returns 0
 */
int main(void)
{
int a;
int b;
int c;

for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
for (c = 0; c < 10; c++)
{
if (a != b && b != c && c < b && b < a)
{
putchar('0' + c);
putchar('0' + b);
putchar('0' + a);

if (a + b + c != 9 + 8 + 7)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
