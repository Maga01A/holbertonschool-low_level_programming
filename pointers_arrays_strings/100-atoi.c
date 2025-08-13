#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: integer value
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;

	/* Skip non-number characters and handle signs */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			;
		i++;
	}

	/* Build number directly with sign applied */
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (sign == 1)
		{
			if (result > (2147483647 - (s[i] - '0')) / 10)
				return (2147483647); /* optional clamp */
		}
		else
		{
			if (result < (-2147483648 + (s[i] - '0')) / 10)
				return (-2147483648); /* optional clamp */
		}
		result = result * 10 + sign * (s[i] - '0');
		i++;
	}

	return (result);
}
