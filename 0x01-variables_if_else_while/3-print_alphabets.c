#include <stdio.h>

/**
* main - prints is posetive, negative
* or zero
*Return: returns zero if program exits well.
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
c = 'A';
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
