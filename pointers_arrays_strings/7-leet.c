#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: input string
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	int i = 0, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (str[i])
	{
		j = 0;
		while (letters[j])
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}

