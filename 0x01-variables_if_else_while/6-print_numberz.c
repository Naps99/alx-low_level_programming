#include <stdio.h>

/**
* main - prints is posetive, negative
* or zero
*Return: returns zero if program exits well.
 */
int main(void)
{
int c = 0;
while (c <= 9)
{
putchar(48 + c);
c++;
}
putchar('\n');
return (0);
}
