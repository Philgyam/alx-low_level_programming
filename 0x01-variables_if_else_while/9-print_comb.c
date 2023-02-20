#include <stdio.h>
#include <stdlib.h>
/**
 * main - The main
 * Return: 0 (success)
 */
int main(void)
{ 
	int a;

	for (a = 0; a < 10; a++)
		putchar(a + '0');
	if(a < 0)
	{
		putchar(',');
		putchar(' ');
	}

putchar('\n');
return (0);
}
