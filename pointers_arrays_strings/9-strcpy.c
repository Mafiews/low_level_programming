#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - Write a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer to return to
 * @src: source string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	/* save starting address of dest */
	char *start = dest;

	/* printf("value of src[0]: %c\n", src[0]); */
	/* printf("address of src: %p\n", &src); */

	/* printf("value of dest: %p\n", dest); */
	/* printf("address of ptr dest: %p\n", &dest); */

	/* printf("value of start: %p\n", start); */
	/* printf("address of ptr start: %p\n", &start); */
	/* putchar('\n'); */

	while (*src) /* copy each char from src to dest until \0 */
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0'; /* add null-terminator at end of dest */
	/* printf("final value of start: %s\n", start); */
	return (start); /* return starting address of dest */
}


/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	char s1[98];
	/* printf("address of s1: %p\n", &s1); */

	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}
