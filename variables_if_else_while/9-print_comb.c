#include <stdio.h>

/**
* main - Entry point
* Description: prints all possible combinations of single-digit numbers,
* separated by ,, followed by a space
* printed in ascending order
* Return: Always 0 (Success)
*/



int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
