#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Write a function that prints half of a string,
 * followed by a new line.
 * The function should print the second half of the string
 * If the number of characters is odd, the function should print
 * the last n characters of the string, where n = (length_of_the_string - 1) / 2
 * @str: string arg
 */

void puts_half(char *str)
{
	int length = 0;
	int half, a;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		half = length / 2;
		for (a = half; a < length; a++)
		{
			_putchar(str[a]);
		}
	}
	else
	{
		half = (length - 1) / 2;
		for (a = half + 1; a < length; a++)
		{
			_putchar(str[a]);
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
	char *str;

	str = "0123456789";
	puts_half(str);
	return (0);
}
