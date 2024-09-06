# include <unistd.h>
# include "main.h"

/**
 * main - check the code.
 * Description: Write a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i < 10; i++)
	{
		write(1, str, 27);
	}
}


int main(void)
{
	print_alphabet_x10();
	return (0);
}
