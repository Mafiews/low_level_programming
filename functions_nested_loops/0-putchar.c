# include <stdio.h>
# include <unistd.h>

/**
* main - Entry point
* Description: Write a program that prints _putchar, followed by a new line.
* Return: 0 (Success)
*/

int main(void)
{
	char *str = "_putchar\n";

	write(1, str, 9);
	return (0);
}
