#include "main.h"
/**
 * print_last_digit - The last number
 * @c: the value to be used
 * Return: Always succes
 */
int print_last_digit(int n)
{
	int b;
	b = n %10;

	if (n < 0)
	{
	b= b * -1;
	}
	_putchar(b + '0');
	return (b);
}
