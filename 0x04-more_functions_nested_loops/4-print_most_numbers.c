#include "main.h"
/**
 * print_most_numbers- This is the main
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x != 2 && x != 4)
		_putchar(x + '0');
	}
	_putchar('\n');

}
