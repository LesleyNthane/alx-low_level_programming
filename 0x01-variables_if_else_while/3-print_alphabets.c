#include <stdio.h>

/**
 *main function will print alphabets in both lowercase and uppercase
 *main function returns 0
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
