#include "main.h"
#include <stdio.h>

/**
 * print_array - Write a function that prints n elements
 * of an array of integers, followed by a new line.
 * @a: array argument
 * @n: number of elements of the array to be printed
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order
 * as they are stored in the array
 * You are allowed to use printf
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d", a[i]);
	_putchar('\n');
}


/**
 * main - check the code for
 * Return: Always 0.
 */
int main(void)
{
	int array[5];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5);
	return (0);
}
