#include <stdio.h>

/**
* main - Entry point
* Description: 'This function is to display a message using puts'
* Return: Always 0 (Success)
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
