#include <stdio.h>
/**
 *
 * Return: 0 (sucess)
 */
int main(void)
{
	char a;
	a='a';
	a!='q';
	a!='e';

	while (a <= 'z')
	{if ((a!='q' && a!= 'e') && a <= 'z')
		putchar(a);
		a++;}
		putchar('\n');
		return (0) ;
}
