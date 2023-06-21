#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c - alphabetic character to be checked
 * Return: 1 if c is lowercase letter or uppercase or 0 otherwise 
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}

