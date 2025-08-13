#include "main.h"
#include <limits.h>
/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0, started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
		{
			/* ignore plus sign */
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			
			/* Overflow check */
			if (sign == 1 && num > (INT_MAX - (s[i] - '0')) / 10)
				return INT_MAX;
			if (sign == -1 && num > (INT_MAX - (s[i] - '0')) / 10)
				return INT_MIN;
			num = num * 10 + (s[i] - '0');
		}
		else if (started)
			break;
		i++;
	}
	return (num * sign);
}
