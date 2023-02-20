#include <stdio.h>
#include <ctype.h>
/**
 * main - The main fuction comes here also
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	char b;

	 a = 'A';
	 b = 'a';

	while (a <= 'Z')
	 {putchar(tolower(a));
		a++; }

	while (b <= 'z')
	{putchar(toupper(b));
		b++; }

	putchar('\n');
	return (0);

}
