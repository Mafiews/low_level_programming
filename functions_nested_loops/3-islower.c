#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _islower - checks is c lowercase character
* main - check the code
* Description - This function takes a single character as an input
* @c: The character to check
* Return: 1 if c is lowercase, 0 otherwise
*/

int _islower(int c);

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	putchar('\n');

	r = _islower('o');
	putchar(r + '0');
	putchar('\n');

	r = _islower(108);
	putchar(r + '0');
	putchar('\n');

	return (0);
}


/**
 * example with stdio.h
 * int main(void)
 * {
 * char c;
 * c='t';
 * printf("Return value when %c is passed to islower(): %d", c, islower(c));
 * c='D';
 * printf("\nReturn value when %c is passed to islower(): %d", c, islower(c));
 * return 0;
 * }
 */
