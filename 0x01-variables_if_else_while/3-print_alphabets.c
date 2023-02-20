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

	 a = 'a';
	 b = 'A';

	while (a <= 'z')
	{putchar(toupper(a));
		a++;}
	while (b <= 'Z')
	{putchar(tolower(b));
		b++;
	return (0);
}
