#include <unistd.h>

/**
* main - Entry point
* Description: function to  print
* 'and that piece of art is useful\" - Dora Korpar, 2015-10-19'
* Return: should return 1
*/

int main(void)
{
	char m[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, m, sizeof(m) - 1);
	return (1);
}
