#include <stdio.h>
/**
 *main - entry point of function
 *
 * Description:
 * This function prints lower case and uppercase alphabet letters
 *
 * return:
 * 0 - means successful execution
 *
 */
int main(void)
{
	char lowerc_alphabet;
	char upperc_alphabet;

	for (lowerc_alphabet = 'a'; lowerc_alphabet <= 'z'; ++lowerc_alphabet)
	{
		putchar(lowerc_alphabet);
	}
	for (upperc_alphabet = 'A'; upperc_alphabet <= 'Z'; ++upperc_alphabet)
	{
		putchar(upperc_alphabet);
	}
	putchar('\n');

	return (0);
}
