#include "main.h"
/**
 * _strcmp - iki string-i müqayisə edir
 * @s1: birinci string
 * @s2: ikinci string
 *
 * Return: s1 və s2 fərqi (ASCII dəyərlərinə görə)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
