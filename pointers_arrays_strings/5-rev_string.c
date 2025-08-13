/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	/* Calculate string length */
	while (s[len] != '\0')
		len++;

	/* Swap characters from start and end moving towards center */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}

