#include "main.h"

/**
 * print_numbers - prints numbers
 * 
 * Return: the numbers 0 to 9
 * 
 */

void print_numbers(void)
{
	int n;

	while (n <= 9)
	{
	_putchar(n + '0');
	n++;
	}
	_putchar("\n");
}
