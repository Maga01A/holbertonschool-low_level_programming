#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: number to calculate
 *
 * Return: factorial of n, -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
