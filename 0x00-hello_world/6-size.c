#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d 1 byte(s)\n", sizeof(char));
	printf("Size of an int: %d 4 byte(s)\n", sizeof(int));
	printf("Size of a long int: %d 4 byte(s)\n", sizeof(long int));
	printf("size of a long long int:%d 8 byte(s)\n", sizeof(long long int));
	printf("size of a float: %d 4 byte(s)\n", sizeof(float));
	return (0);
}
