#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints all natural numbers from n to 98
* @n: first parameter
*
* Description: Write a function that prints all natural numbers
* from n to 98, followed by a new line.
* Numbers must be separated by a comma, followed by a space
* Numbers should be printed in order
* The first printed number should be the number passed to your function
* The last printed number should be 98
* You are allowed to use the standard library
*/

void print_to_98(int n);

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 97; i++)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
	else
	{
		for (i = n; i >= 97; i--)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
	_putchar('\n');
}

int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return (0);
}
