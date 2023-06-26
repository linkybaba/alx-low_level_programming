#include "main.h"

/**
 * _puts - prints a string
 * @str: An integer input pointer
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}

