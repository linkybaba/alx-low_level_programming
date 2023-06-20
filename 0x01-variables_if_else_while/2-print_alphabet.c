#include <stdio.h>

/**
* main - prints the alphabet in lowercase, followed by a new line
* Return: Always (0) success
*
*/

int main(void)
{
	/**
	* Declare a variable and initialize it with the
	* first member of the range [a - z]
	*
	*/
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
