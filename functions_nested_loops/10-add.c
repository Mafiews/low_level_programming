#include <stdio.h>
#include "main.h"

/**
* add - computes sum of 2 integers
* @a: first parameter
* @b: second parameter
* Return: sum of 2 integers
*/

int add(int a, int b);

int add(int a, int b)
{
	int result;

	result = (a + b);

	return (result);
}

int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}
