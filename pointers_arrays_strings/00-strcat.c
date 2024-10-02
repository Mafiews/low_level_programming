#include "main.h"
#include <stdio.h>

/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: pointer to restult string dest
 * @src: source string
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';
	return (temp);
}

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}
