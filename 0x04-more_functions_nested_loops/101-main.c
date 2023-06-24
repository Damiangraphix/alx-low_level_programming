#include "main.h"

/**
 * main - check the code that prints numbers
 * print_number - prints numbers of an integer
 * @n: integer to be printed
 * Return: Always 0.
 */
void print_number(int n);
int main(void)
{
	print_number(98);
	_putchar('\n');
	print_number(402);
	_putchar('\n');
	print_number(1024);
	_putchar('\n');
	print_number(0);
	_putchar('\n');
	print_number(-98);
	_putchar('\n');
	return (0);
}
