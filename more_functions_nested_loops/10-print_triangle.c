#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * You can only use _putchar function to print
 * @size: size of the triangle
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 */

void print_triangle(int size)
{
	int row, space, hash;

	for (row = 0; row < size; row++)
	{
		for (space = 0; space < 2 * (size - row) - 1; space++)
		{
			printf(" ");
		}
		for (hash = 0; hash <= row; hash++)
		{
			printf("# ");
		}
		printf("\n");
	}
}


/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	print_triangle(2);
	print_triangle(10);
	print_triangle(1);
	print_triangle(0);
	return (0);
}
