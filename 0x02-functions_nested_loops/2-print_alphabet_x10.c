#include "main.h"
/**
 * print_alphabet_x10 -  its not empty
 * Return;
 */
void print_alphabet_x10(void)
{
	char c;
	int b;

	for (b = 1; b <= 10; b++)
	{
	for (c = 'a'; c <= 'z'; c++)
	{_putchar(c); }
	_putchar('\n');
	}
}
