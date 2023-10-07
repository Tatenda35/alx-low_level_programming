#include <stdio.h>
/**
 * main: entry point of function
 * description: using putchar
 * to print base ten
 * on a new line
 *
 * return: 0 means executed successfully
 */
int main(void)
{
	int base;

	for (base = 0; base < 10; ++base)
	{
		putchar(base);
	}
	putchar('\n');

	return (0);
}
