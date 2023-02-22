#include "main.h"
/**
 * print_sign - It shows the signs
 * @n - Its the integer
 * Return : Always 1 when success
 */
int print_sign(int n)
{
	if (n > 0)
	{_putchar('+');
	return (1);
	}
	else
	if (n == 0)
	{_putchar('0');
	return 0;
	}
	else 
	if (n < 0)
	{_putchar('-');
	return -1;
	}
return 0;
}
