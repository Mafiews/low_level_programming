#headers
#include <stdio.h>

/**
* main - Entry point
* Description: prints all possible different combinations of three digits,
* Numbers must be separated by a comma and followed by a space.
* The three digits must be different
* Print only the smallest combination of three digits
* Numbers should be printed in ascending order, with three digits
* You can only use putchar six times maximum in your code
* You are not allowed to use any variable of type char
* Return: Always 0 (Success)
*/

int main(void)
{
	int m, n, o;

	for (m = 0; m < 10; m++)
	{
		for (n = m + 1; n < 10; n++)
		{
			for (o = n + 1; o < 10; o++)
			{
				putchar(m + '0');
				putchar(n + '0');
				putchar(o + '0');

				if (m != 7 || n != 8 || o != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
