#include <stdio.h>

/**
* main - prints the alphabet in lowercase, followed by a new line
* Return: Always (0) success
*
*/

int main(void)
	/* prints lowercase alphabet*/
{
	char lowercase, uppercase;
	/* prints lowercase alphabet*/
	lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	/*prints uppercase alphabet*/
	uppercase = 'A';

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
