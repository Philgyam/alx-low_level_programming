#include<stdio.h>
/**
* main - A programme that Prints out data sizes
* Return: 0 (sucess)
*/
int main(void)
{
printf("Size of a char: %s byte(s)", sizeof(char));
printf("Size of an int: %d byte(s)", sizeof(int));
printf("Size of a long int: %lu byte(s)", sizeof(long int));
printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
printf("Size of a float: %f byte(s)", sizeof(float));
return (0);
}
