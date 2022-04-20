#include "main.h" 
/**
 * _puts - prints a string 
 * @str: A pointer to the string to print
 * Return: void
 */

void _puts(char *str) 
{ 
	int i = 0;
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}

	_putchar('\n');
} 
