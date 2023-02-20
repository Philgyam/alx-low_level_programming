#include <stdio.h>
#include <stdlb.h>

/**
 * main - The main fuction comes here
 * Return: 0 (success)
 */
int main(void)
{
	char a = 'a';
	char b = 'A';

	while (a <= 'a')
	{putchar(toupper(a));
		a++;}
	while (b <= 'Z')
	{putchar(tolower(b));
		b++;
	return (0);
}
