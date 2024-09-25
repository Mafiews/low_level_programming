#include "main.h"
#include <stdio.h>


/**
 * _atoi - Write a function that converts a string to an integer.
 * The number in the string can be preceded by an infinite number of characters
 * You need to take into account all the - and + signs before the number
 * If there are no numbers in the string, the function must return 0
 * You are not allowed to use long
 * You are not allowed to declare new variables of “type” array
 * You are not allowed to hard-code special values
 * We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.
 * FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.
 * @s: char to convert
 * return: char converted to int
 */

int _atoi(char *s)
{
        int i = 0;
	int sign = 1;
	int digit = 0;
	unsigned int result = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			digit = 1;
			result = (result * 10) + (s[i] - '0');
			i++;
		}
		if (digit == 1)
		{
			break;
		}
		i++;
	}
	return (result *= sign);
}


/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	int nb;

	nb = _atoi("98");
	printf("%d\n", nb);
	nb = _atoi("-402");
	printf("%d\n", nb);
	nb = _atoi("          ------++++++-----+++++--98");
	printf("%d\n", nb);
	nb = _atoi("214748364");
	printf("%d\n", nb);
	nb = _atoi("0");
	printf("%d\n", nb);
	nb = _atoi("Suite 402");
	printf("%d\n", nb);
	nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
	printf("%d\n", nb);
	nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%d\n", nb);
	return (0);
}
