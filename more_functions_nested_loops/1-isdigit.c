#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: character to check
 * Return: 1 if digit, 0 otherwise
 */

/* int _isdigit(int c) */
/* { */
/* 	if (c >= '0' && c <= '9') */
/* 	{ */
/* 		return (1); */
/* 	} */
/* 	else */
/* 	{ */
/* 		return (0); */
/* 	} */
/* } */


/* with std lib */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
