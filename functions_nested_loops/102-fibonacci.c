#include <stdio.h>
#include "main.h"

/**
* fib - print the 50 first fibonacci numbers
*
* Description: Write a program that prints the first 50 Fibonacci numbers,
* starting with 1 and 2, followed by a new line.
* You are allowed to use the standard library;
* Return: 0 (success);
*/

void fib(void);

void fib(void)
{
	long int fib_one = 1;
	long int fib_two = 2;
	long int next;
	int count = 2;

	printf("%ld, %ld", fib_one, fib_two);

	while (count < 50)
	{
		next = fib_one + fib_two;
		printf(", %ld", next);

		fib_one = fib_two;
		fib_two = next;
		count++;
	}
	printf("\n");
}

int main(void)
{
	puts("Calling the fib function:");
	fib();
	puts("okbye.");
	return (0);
}
