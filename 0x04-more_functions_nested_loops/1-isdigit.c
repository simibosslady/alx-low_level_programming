#include "main.h"
/**
 * _isdigit - To check for a digit
 * @c : The digit to be checked
 * Return: 1 if it is a digit or 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
