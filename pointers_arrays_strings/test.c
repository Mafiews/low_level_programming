#include <stdio.h>

/**
 * main - pointers arithmetic
 * Return: Always 0.
 */

int main(void)
{
	int a[5];

	*a = 98; /* same as doing *(a + 0) = 98 */
	*(a + 1) = 198;
	*(a + 2) = 298;
	*(a + 3) = 398;
	*(a + 4) = 498;

	printf("Value of a[0] using a[0]: %d.\n", a[0]);
	printf("Value of a[0] using *a: %d.\n", *a);
	printf("------------------------------\n");
	printf("Value of 'a' (also address of a[0]): %p\n", a);
	printf("Address of 'a[1] using (a + 1)': %p\n", (a + 1));
	printf("Address of 'a[1] using &(*(a + 1))': %p\n", &(*(a + 1)));
	
	return (0);
}
