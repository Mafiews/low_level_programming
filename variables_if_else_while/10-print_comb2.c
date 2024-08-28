#include <stdio.h>

/**
* main - Entry point
* Description: prints all numbers from 00 to 99,
* separated by a comma, followed by a space
* printed in ascending order
* Return: Always 0 (Success)
*/


int main(void)
{
  for (int i = 0; i < 100; i++)
      {
        int tens = i / 10;
        int units = i % 10;

        putchar('0' + tens);
        putchar('0' + units);
	if (i < 99)
	  {
	    putchar(',');
	    putchar(' ');
	  }
    }
  return (0);
}
