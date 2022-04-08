#include <stdio.h>

/**
* main - prints is posetive, negative
* or zero
*Return: returns zero if program exits well.
 */
int main(void)
{
char c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
