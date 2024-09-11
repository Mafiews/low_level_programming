#include <stdio.h>
#include "main.h"

/**
* naturals - computes sum of mutliples of 3 and 5 below 1024;
*
* Description: Write a program that computes and prints the sum
* of all the multiples of 3 or 5 below 1024 (excluded),
* followed by a new line.
* You are allowed to use the standard library;
* Return: 0 (success);
*/

int naturals(void);

int naturals(void)
{
	int i;
	int result = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			result += i;
		}
	}
	printf("The sum of multiples of 3 and 5 below 1024 is: %d\n", result);
	return (0);
}

int main(void)
{
	puts("Let's call the #naturals function:");
	naturals();
	puts("That's a success!");
	return (0);
}
