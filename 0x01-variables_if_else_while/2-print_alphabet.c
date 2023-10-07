#include <stdio.h>
/**
 * main - Entry point fot the program.
 * Description:
 * This algorithim prints the alphabet without using printf.
 * we use a for loop.
 *
 * return:
 * 0 - means successful execution.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; ++alphabet)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
