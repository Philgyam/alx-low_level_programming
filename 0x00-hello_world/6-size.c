#include<stdio.h>
/**
* main - A programme that Prints out data sizes
* Return: 0 (sucess)
*/
int main(void)
{
printf("Size of char: %s bytes(s)\n", sizeof(char));
printf("Size of int: %d bytes(s)\n", sizeof(int));
printf("Size of long int: %ld bytes(s)\n", sizeof(long int));
printf("Size of lomg long int: %lld bytes(s)\n",sizeof(long long int));
printf("Size of float: %f byte(s)\n", sizeof(float));
return (0);
}
