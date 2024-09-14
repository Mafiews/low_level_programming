#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times numbers from 0-14,
 * followed by a new line.
 */

void more_numbers(void)
{
	int num = 0;
	int counter = 0;

	while (counter < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
		counter += 1;
	}
}

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	more_numbers();
	return (0);
}
