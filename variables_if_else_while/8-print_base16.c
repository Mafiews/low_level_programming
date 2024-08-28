#include <stdio.h>

/**
* main - Entry point
* Description: prints all the numbers of base 16 in lowercase, using putchar,
* followed by a new line.
* Return: Always 0 (Success)
*/

int main(void)
{
	char number;
	char letter;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
