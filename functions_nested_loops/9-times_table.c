#include <stdio.h>
#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0.
*
* Description - Write a function that prints the 9 times table
* starting with 0.
*/

void times_table(void);

void times_table(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		printf("9 * %d = %d\n", i, (9 * i));
	}
}

int main(void)
{
	times_table();
	return (0);
}
