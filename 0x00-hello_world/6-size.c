#include <stdio>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	printf("size of char:%zu bytes\n", sizeof(char));
	printf("size of int:%zu bytes\n", sizeof(int));
	printf("size of long int:%zu bytes\n",sizeof(long));
	printf("size of long long int:%zu bytes\n",sizeof(long long));
	printf("size of float:%zu bytes\n",sizeof(float));

	return(0);

}
