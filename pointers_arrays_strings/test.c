#include <stdio.h>

/**
 * main - printing the size, in bytes, of a pointer
 * Return: Always 0.
 */

int main(void)
{
	int *p;

	printf("The size of the *p pointer is: %lu bytes.\n", sizeof(p));
	return (0);
}
