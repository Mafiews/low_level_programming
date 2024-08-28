#include <stdio.h>

/**
* main - Entry point
* Description: print alphabet in lowercase then uppercase followed by \n
* Return: Always 0 (Success)
*/

int main(void)
{
	char low_letter = 'a';
	char up_letter = 'A';

	while (low_letter <= 'z')
	{
		putchar(low_letter);
		low_letter++;
	}
	while (up_letter <= 'Z')
	{
		putchar(up_letter);
		up_letter++;
	}
	putchar('\n');
	return (0);
}
