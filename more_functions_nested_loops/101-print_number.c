#include <stdio.h>
#include "main.h"

/**
 * print_number - Write a function that prints an integer.
 * You can only use _putchar function to print
 * You are not allowed to use long
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special values
 * @n: number to check
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	if (num / 10 > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}


/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	print_number(98);
	_putchar('\n');
	print_number(402);
	_putchar('\n');
	print_number(1024);
	_putchar('\n');
	print_number(0);
	_putchar('\n');
	print_number(-98);
	_putchar('\n');
	return (0);
}
