#include <stdio.h>
/**
 * main - this is the main entry point of the function
 *
 * Description:
 * This algorithm prints alphabet letters in lowercase.
 * Itprints a new line after each letter.
 * it does not print letters q and e.
 *
 * return:
 * 0 - means successful execution.
 */
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; ++alphabet)
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
	putchar('\n');
	return (0);
}
