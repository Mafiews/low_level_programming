#include "main.h"
#include <stdio.h>

/**
 * _puts - Write a function that prints a string, followed by a new line, to stdout.
 @str: string to display
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	_puts(str);
	return (0);
}
