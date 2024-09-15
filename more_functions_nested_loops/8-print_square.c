#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: size of the square
 * You can only use _putchar function to print
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 */


void print_square(int size)
{
	int col;
        int row;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
	        _putchar('\n');
	}
	_putchar('\n');
}

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	print_square(2);
	print_square(10);
	print_square(0);
	return (0);
}
