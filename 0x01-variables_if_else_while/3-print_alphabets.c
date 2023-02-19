#include <stdio.h>

/**
* main - Entry
*
* Return: Always 0 (success)
*/
int main(void)
{
char charecter;

for (charecter = 'a'; charecter <= 'z'; charecter++)
{
putchar(charecter);
}
for (charecter = 'A'; charecter <= 'Z'; charecter++)
{
putchar(charecter);
}
putchar('\n');
return (0);
}
