#include <stdio.h>
#include "main.h"

/**
* _abs - computes the absolute value of an integer;
* @n: integer to check
*
* Description - Write a function that computes absolute value of an integer;
* Return: 0 (success);
*/

int _abs(int n);

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);

	r = _abs(0);
	printf("%d\n", r);

	r = _abs(1);
	printf("%d\n", r);

	r = _abs(-98);
	printf("%d\n", r);

	return (0);
}
