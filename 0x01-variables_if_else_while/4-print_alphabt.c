#include <stdio.h>

/**
 *main function prints alphabets except q and e
 *main function returns 0
 */
int main(void)
{
char cha;

for (cha = 'a'; cha <= 'z'; cha++)
{
if (cha != 'q' && cha != 'e')
{
putchar(cha);
}
}
putchar('\n');
return (0);
}
