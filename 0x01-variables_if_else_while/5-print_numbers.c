#include <stdio.h>
/**
 * main - entry point of function
 *
 * Description: An algorith that prints single number of base ten.
 * must print a new line
 *
 * return: 0 means executed successfully
 */
int main(void)
{
	int base;

	for (base = "0"; base < "10"; ++base)
	{
		printf("%i \n", base);
	}
	return (0);
}
