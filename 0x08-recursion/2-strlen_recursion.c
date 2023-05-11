#include "main.h"
/**
 * _strlen_recursion - calculate the length of a string
 * @s: the string to count
 * Return: interger value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}