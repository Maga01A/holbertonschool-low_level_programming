#include <unistd.h>
#include "main.h"
/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: string to print from
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len++;

	i = (len + 1) / 2;  /* Start index for second half */

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

