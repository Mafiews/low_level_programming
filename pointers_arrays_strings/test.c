#include <stdio.h>

/**
 * main - storing the address of a variable into a pointer.
 * Because &n gives us the address of the variable n,
 * the variable p now holds the address of the variable n: p points to n.
 * If the variable n’s address were 26, then the value of our pointer p would be 26.
 * A pointer can only point to a variable of the type it is supposed to point to.
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("Address of the variable 'n': %p.\n", &n);
	printf("Value of 'p': %p.\n", p);
	
	return (0);
}
