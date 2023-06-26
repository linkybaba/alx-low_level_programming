#include <stdio.h>

/**
 * int _strlen - returns the length of a string
 * @s: An integer input pointer
 * Return: length of @s
 */

int _strlen(char *s)
{
/* returns the length of a string */
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
