#include <stdio.h>
/**
 * main - The mai function goes here
 * Return: 0 (sucess)
 */
int main(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		if ((a != 'q' && a != 'e') && a <= 'z')
		putchar(a);
		a++;
	}
		putchar('\n');
		return (0);
}
