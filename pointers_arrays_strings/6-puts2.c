#include "main.h"
#include <stdio.h>

/**
 * puts2 - Write a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string to reverse
 */

void puts2(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		if (length % 2 == 0)
		{
			_putchar(str[length]);
		}
		length++;
	}
	_putchar('\n');
}
