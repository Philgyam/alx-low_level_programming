#include<stdio.h>
/**
* main - A programme that Prints out data sizes
* Return: 0 (sucess)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of Char: %lu bytes(s)\n", sizeof(a));
printf("Size of int: %lu bytes(s)\n", sizeof(b));
printf("Size of long int: %lu bytes(s)\n", sizeof(c));
printf("Size of long long int: %lu bytes(s)\n", sizeof(d));
printd("Size of float: %lu bytes(s)\n", sizeof(f));
return (0);
}
