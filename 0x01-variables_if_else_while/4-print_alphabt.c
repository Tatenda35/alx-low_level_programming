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

	do {
		putchar(alphabet);
		++alphabet;
	}
	while (alphabet <= 'z' && (alphabet != e || q))
		putchar('\n');

	return (0);
}
