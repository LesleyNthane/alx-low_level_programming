#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
char cha;
int number;

for (number = 0; number < 10; number++)
{
putchar((number % 10) + '0');
}
for (cha = 'a'; cha <= 'f'; cha++)
{
putchar(cha);
}
putchar('\n');
return (0);
}
