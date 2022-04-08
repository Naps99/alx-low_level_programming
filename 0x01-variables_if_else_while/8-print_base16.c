#include <stdio.h>

/**
* main - prints is posetive, negative
* or zero
*Return: returns zero if program exits well.
 */
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
