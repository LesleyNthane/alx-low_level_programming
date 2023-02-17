#include <stdio.h>

/**
 *output of the main fuction is alphabets in lower case
 *main function returns 0
 */
int main(void)
{
char lowerCase;
for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
{
putchar(lowerCase);
}
putchar('\n');
return (0);
}
