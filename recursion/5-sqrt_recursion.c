#include "main.h"

int sqrt_helper(int n, int i)
{
    if (i * i == n)
        return i;
    if (i * i > n)
        return -1;
    return sqrt_helper(n, i + 1);
}

int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    return sqrt_helper(n, 1);
}
