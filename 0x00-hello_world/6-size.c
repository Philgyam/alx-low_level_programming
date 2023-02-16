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
printf("Size of Char: %lu bytes(s)", sizeof(a)\n);
printf("Size of int: %lu bytes(s)", sizeof(b)\n);
printf("Size of long int: %lu bytes(s)", sizeof(c)\n);
printf("Size of long long int: %lu bytes(s)", sizeof(d)\n);
printd("Size of float: %lu bytes(s)", sizeof(f)\n);
return (0);
}
