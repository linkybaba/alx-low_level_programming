#include "main.h"

/**
 * _islower - Checks for lowercase character
 * Return: 1 if lowercase
 * Return: 0 otherwise
 * @c: letters to be checked
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
