#include <stdio.h>

#define BASE 1000000000UL  /* 10^9, 9 basamak */

/**
 * print_number - prints a number split into high and low parts
 * @high: the high part of the number
 * @low: the low part of the number
 */
void print_number(unsigned long high, unsigned long low)
{
	if (high)
		printf("%lu%09lu", high, low);
	else
		printf("%lu", low);
}

/**
 * main - prints the first 98 Fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1_high = 0, fib1_low = 1;
	unsigned long fib2_high = 0, fib2_low = 2;
	unsigned long next_high, next_low;
	int count = 2;

	print_number(fib1_high, fib1_low);
	printf(", ");
	print_number(fib2_high, fib2_low);

	while (count < 98)
	{
		/* Toplama */
		next_low = fib1_low + fib2_low;
		next_high = fib1_high + fib2_high;
		if (next_low >= BASE)
		{
			next_low -= BASE;
			next_high += 1;
		}

		printf(", ");
		print_number(next_high, next_low);

		/* Kaydır */
		fib1_high = fib2_high;
		fib1_low = fib2_low;
		fib2_high = next_high;
		fib2_low = next_low;

		count++;
	}
	printf("\n");

	return (0);
}

