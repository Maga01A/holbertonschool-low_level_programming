#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string to modify
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ('a' - 'A');
		i++;
	}
	return (str);
}

