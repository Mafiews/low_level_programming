#include <unistd.h>
#include "main.h"

/**
* print_sign - check for alphabetic character;
* @n: character to check
*
* Description - Write a function that prints the sign of a number.
* Return: 1 and prints + if n is greater than zero,
* 0 and prints 0 if n is zero,
* -1 and prints - if n is less than zero
*/

int print_sign(int n);

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

int main(void)
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');

	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');

	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');

	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
