#include <stdio.h>
/*
 * main - main function
 * Description: This algorithim prints the alphabet without using printf.
 * return: 0
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
