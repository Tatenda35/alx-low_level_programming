#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* 
 * main - main block executed
 * Description- an algorithm that assigns random variable n
 * and prints output if positive, zero or negative
 * Return (0)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
