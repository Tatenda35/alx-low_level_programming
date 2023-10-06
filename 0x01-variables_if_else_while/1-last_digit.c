#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - main block
 * Description: printing last digit of  stored number stored in variable
 * return: 0
 */
int main(void)
{
	int n;
	int last_number;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_number = n % 10;
	/* greater than 5/is 0/is less than 6 and not 0 */
	if (n > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last_number);
	}
	else if (n == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last_number);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_number);
	}
	return (0);
}
