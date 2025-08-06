#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, next;
	int count = 2;

	printf("%lu, %lu", fib1, fib2);

	while (count < 50)
	{
		next = fib1 + fib2;
		printf(", %lu", next);
		fib1 = fib2;
		fib2 = next;
		count++;
	}
	printf("\n");
	return (0);
}
