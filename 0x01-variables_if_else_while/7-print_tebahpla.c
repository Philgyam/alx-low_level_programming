#include <stdio.h>
#include <stdlib>

/**
 * main - Main is a variable
 * Return: 0 (succes))
 */
int main(void)
{
	char z = 'z';
	z = (z>='a');
	
	while (z>='a')
	{putchar(z);
		z--;
	}
	return (0);
