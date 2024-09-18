#include <stdio.h>

/**
 * main - printing size and address of an array
 *  In the context of sizeof, the name of the array refers to the array object itself
 * (composed of all its elements). Thus, sizeof an array
 * will give you the amount of memory space used by all its elements.
 *  In the context of &, the name of the array refers to the array object itself
 * (composed of all its elements). So the address-of the array name
 * will give you the address of the whole array, which is the same as the address of its first element.
 * Return: Always 0.
 */

int main(void)
{
	int a[5];

	printf("Size of the array (memore space used by all elements, here 5x4 bytes): %lu.\n\n", sizeof(a));
	printf("Printing the array and its address (object itself):\n");
	printf("- array a: %p;\n", a);
	printf("- address(&b): %p;\n", &a);
	printf("The address of the whole array is the same as the address of its first element.");
	return (0);
}
