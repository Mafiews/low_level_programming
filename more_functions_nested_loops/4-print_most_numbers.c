#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints 0-9 except 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	print_most_numbers();
	return (0);
}
