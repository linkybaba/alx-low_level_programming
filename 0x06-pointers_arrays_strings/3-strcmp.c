#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: The pointer to the first string to be compared
 * @s2: The pointer to the secong string to be compared
 * Return: A pointer to the resulting strings
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
