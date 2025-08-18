#include "main.h"

/**
 * sqrt_helper - finds the natural square root of a number
 * @n: number to find the square root of
 * @i: current candidate number
 *
 * Return: natural square root of n, -1 if none
 */
int sqrt_helper(int n, int i)
{
	if ((i * i) == n)
		return (i);
	if ((i * i) > n)
		return (-1);
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: natural square root of n, -1 if none
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 1));
}
