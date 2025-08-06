#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long number = 612852475143;
	long i, max_factor;

	/* Remove smallest prime factors first */
	while (number % 2 == 0)
	{
		number /= 2;
	}

	/* Check odd numbers starting from 3 up to sqrt(number) */
	for (i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			number /= i;
		}
	}

	/* If number is now > 2, then it's the largest prime factor */
	max_factor = (number > 2) ? number : i - 2;

	printf("%ld\n", max_factor);

	return (0);
}

