#include "main.h"
/**
 * print_numbers- Print everything
 * return : always success
 * void: the empty space;
 */
void print_numbers(void)
{
	int a;
	
	for (a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
