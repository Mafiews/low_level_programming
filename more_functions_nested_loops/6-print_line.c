#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: number of times the character _ should be printed
 * You can only use _putchar function to print
 * Where n is the number of times the character _ should be printed
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}


/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	print_line(0);
	print_line(2);
	print_line(10);
	print_line(-4);
	return (0);
}
