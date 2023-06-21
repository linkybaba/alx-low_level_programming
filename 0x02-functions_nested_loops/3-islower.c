#include "main.h"

/**
 * main -  Checks for lowercase character
 * Return 1 if lowercase
 * Return 0 otherwise
 *
 */

/* function compares characters */
/* char c compares with lowercase characters */
/* _islowercase is name of the function */

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
