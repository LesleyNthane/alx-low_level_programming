#include <stdio.h>

/**
 *main function will output tha alphabets in reverse
 *main function returns 0
 */
int main(void)
{
char cha;

for (cha = 'z'; cha >= 'a'; cha--)
{
putchar(cha);
}
putchar('\n');
return (0);
}
