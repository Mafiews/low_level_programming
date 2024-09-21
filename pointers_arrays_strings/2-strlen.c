#include "main.h"
#include <stdio.h>

/**
 * strlen - Write a function that returns the length of a string.
 * @s: string to evaluate
 * Return: int for str length
 */

int _strlen(char *s)
{
	int count = 0;
	
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}


/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
