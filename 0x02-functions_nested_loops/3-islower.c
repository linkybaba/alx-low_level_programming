#include "main.h"

/**
 * _islower - Checks for lowercase character
 * Return: 1 if lowercase
 * Return: 0 otherwise
 * @c: operand
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
