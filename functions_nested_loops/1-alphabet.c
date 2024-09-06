#include <unistd.h>

/**
* main - check the code
* print_alphabet - Prints the lowercase alphabet followed by a newline
* Description: Write a function that prints the alphabet, in lowercase,
* followed by a new line.
* Return: Always 0 (Success)
*/

void print_alphabet(void);

void print_alphabet(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz\n";

	write(1, str, 27);
}

int main(void)
{
	print_alphabet();
	return (0);
}
