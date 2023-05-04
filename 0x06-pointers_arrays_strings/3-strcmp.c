#include "main.h"

/**
 * _strcmp - compare pointers to two strings
 * @s1: apointer to the first string
 * @s2: a pointer to the second string
 * Return: if str1 < str2, the negative difference of
 * the first unmatched characters.
 * if str1 == str2, 0
 * if str1 > str2, the positive difference of the first unmatched characters
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
