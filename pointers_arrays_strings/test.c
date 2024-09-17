#include <stdio.h>

/**
 * main - derefencing pointers
 * The real power of pointers is that they can manipulate
 * values stored at the memory address they point to.
 * This is called dereferencing. To do this, you can use the dereference operator *.
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;

        printf("Value of 'n': %d.\n", n);
	printf("Address of 'n': %p.\n", &n);
	printf("Value of 'p': %p.\n", p);

	printf("Assigning '420' to *p.\n");
	*p = 420;
	
	printf("Value of 'n': %d.\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);

	return (0);
}
