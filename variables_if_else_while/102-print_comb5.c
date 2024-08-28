#include <stdio.h>

/**
* main - Entry point
* Description: prints all possible combinations of two two-digit numbers
* The numbers should range from 0 to 99
* The two numbers should be separated by a space
* All numbers should be printed with two digits. 1 should be printed as 01
* The combination of numbers must be separated by comma, followed by a space
* The combinations of numbers should be printed in ascending order
* 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
* You can only use the putchar function
* You can only use putchar eight times maximum in your code
* You are not allowed to use any variable of type char
* All your code should be in the main function
* Return: Always 0 (Success)
*/

int main(void)
{
	int num_one, num_two;

	for (num_one = 0; num_one < 100; num_one++)
	{
		for (num_two = num_one + 1; num_two < 100; num_two++)
		{
			putchar((num_one / 10) + '0');
			putchar((num_one % 10) + '0');
			putchar(' ');
			putchar((num_two / 10) + '0');
			putchar((num_two % 10) + '0');

			if (num_one != 98 || num_two != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
