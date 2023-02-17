#include <stdlib.h>
#include <time.h>
#include <std.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n%10;
	/* your code goes there */

	if (m > 5) 
		printf("Last digit of %d is %d and is greater that 5\n", n , m);
	else if (m = 0)
		printf("Last digit of %d is %d and is 0\n", n);
	else if (m<5)
		printf("Last digit of %d is %d and is less than 6 and not 0\n");

	return (0);
}
