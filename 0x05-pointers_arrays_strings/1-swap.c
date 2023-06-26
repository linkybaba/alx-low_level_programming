#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: An integer input pointer
 * @b: An integer input pointer
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
/* the function that swaps the value of two integers */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
