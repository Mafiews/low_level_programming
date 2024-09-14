#include <stdio.h>
/* #include <ctype.h> */
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* with std lib */
/* int _isupper(int c) */
/* 	if (isupper(c)) */
/* 	{ */
/* 		return (1); */
/* 	} */
/* 	else */
/* 	{ */
/* 		return (0); */
/* 	} */
/* } */


/**
* main - check the code.
* Return: Always 0.
*/

int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
