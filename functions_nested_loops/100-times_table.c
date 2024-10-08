#include <stdio.h>
#include "main.h"

/**
* print_times_table - prints the n times table, starting with 0.
* @n: first parameter
*
* Description: Write a function that prints the n times table,
* starting with 0.
* If n is greater than 15 or less than 0 the function should not print anything
*/

void print_times_table(int n);

void print_times_table(int n)
{
	int i, result;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= 10; i++)
	{
		result = n * i;
		printf("%d * %d = %d\n", n, i, result);
	}
}

int main(void)
{
	print_times_table(3);
	_putchar('\n');
	print_times_table(5);
	_putchar('\n');
	print_times_table(98);
	_putchar('\n');
	print_times_table(12);

	return (0);
}
