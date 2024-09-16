#include <stdio.h>
#include "main.h"

/**
 * find_prime - Write a program that finds and prints
 * the largest prime factor of the number 612852475143,
 * followed by a new line.
 * @num: number to check
 * Return: largest factor of number passed as argument;
 */

unsigned long find_prime(unsigned long num)
{
	unsigned long largest_prime;
	unsigned long i;

	/* Remove all factors of 2 */
	while (num % 2 == 0)
	{
		largest_prime = 2;
		num /= 2;
	}

	/* Check odd numbers starting from 3 */
	for (i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			largest_prime = i;
			num /= i;
		}
	}

	/* If num is a prime number greater than 2 */
	if (num > 2)
	{
		largest_prime = num;
	}

	return (largest_prime);
}


/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long largest_prime = find_prime(num);

	printf("The largest prime factor of %lu is: %lu\n", num, largest_prime);
	return (0);
}
