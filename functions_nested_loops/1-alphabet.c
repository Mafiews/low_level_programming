#include <unistd.h>

/**
 * print alphabet - writes alphabet in lowercase
 * main - calls the print alphabet function
 * description: Write a function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Prototype: void print_alphabet(void);
 * You can only use _putchar twice in your code
 * Return: Always 0.
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
