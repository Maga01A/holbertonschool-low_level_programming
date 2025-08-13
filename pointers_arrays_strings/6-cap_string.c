#include "main.h"
/**
 * is_separator - checks if a character is a separator
 * @c: character to check
 *
 * Return: 1 if separator, 0 otherwise
 */
int is_separator(char c)
{
	char sep[] = " \t\n,;.!?\"(){}";

	int i = 0;

	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;

	/* Capitalize first character if it's lowercase */
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 'a' - 'A';

	i++;

	while (str[i])
	{
		if (is_separator(str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 'a' - 'A';
		i++;
	}
	return (str);
}

