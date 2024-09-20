#include <stdio.h>

/**
 * main - Solve me
 * Return: Always 0.
 */

int main(void)
{
	int a[5];
	int *p;
	int *p2;

	printf("Address of array a: %p\n", a);
	printf("Address of pointer p: %p\n", p);
	printf("Address of pointer p2: %p\n", p2);
	printf("\n");

	*a = 98;
	printf("Value of *a: %d\n", *a);
	printf("Address of *a: %p\n", a);
	printf("\n");

	*(a + 1) = 198;
	printf("Value of *(a + 1): %d\n", *(a + 1));
	printf("Address of *(a + 1): %p\n", (a + 1));
	printf("\n");

	*(a + 2) = 298;
	printf("Value of *(a + 2): %d\n", *(a + 2));
	printf("Address of *(a + 2): %p\n", (a + 2));
	printf("\n");

	a[3] = 398;
	printf("Value of a[3]: %d\n", a[3]);
	printf("Address of a[3]: %p\n", &(a[3]));
	printf("\n");

	*(a + 4) = 498;
	printf("Value of *(a + 4): %d\n", *(a + 4));
	printf("Address of *(a + 4): %p\n", (a + 4));
	printf("\n");

	p = a + 1;
	printf("p = a + 1\n");
	printf("Value of p: %d\n", *p);
	printf("Address of a: %p\n", p);
	printf("\n");

	*p = 98;
	printf("*p = 98\n");
	printf("Value of *p: %d\n", *p);
	printf("\n");

	p2 = a + 3;
	printf("p2 = a + 3\n");
	printf("Value of p2: %d\n", *p2);
	printf("Address of p2: %p\n", p2);
	printf("\n");

	*p2 = *p + 1337;
	printf("*p2 = *p + 1337\n");
	printf("Value of p2: %d\n", *p2);
	printf("Address of p2: %p\n", p2);

	return (0);
}

/**
 * main - pointers arithmetic
 * Return: Always 0.
 */

/* int main(void) */
/* { */
/* 	int a[5]; */

/* 	*a = 98; /\* same as doing *(a + 0) = 98 *\/ */
/* 	*(a + 1) = 198; */
/* 	*(a + 2) = 298; */
/* 	*(a + 3) = 398; */
/* 	*(a + 4) = 498; */

/* 	printf("Value of a[0] using a[0]: %d.\n", a[0]); */
/* 	printf("Value of a[0] using *a: %d.\n", *a); */
/* 	printf("------------------------------\n"); */
/* 	printf("Value of 'a' (also address of a[0]): %p\n", a); */
/* 	printf("Address of 'a[1] using (a + 1)': %p\n", (a + 1)); */
/* 	printf("Address of 'a[1] using &(*(a + 1))': %p\n", &(*(a + 1))); */
	
/* 	return (0); */
/* } */
