#include "main.h"
/**
 * print_alphabet_x10 - print_alphabet_x10 function
 *
 * Description: An algorithm that writes a function
 * that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char lowercase_alphab;

		while (lowercase_alphab <= 'z')
		{
			putchar(lowercase_alphab);
			lowercase_alphab++;
		}

		purchar('\n');
		count++;
	}
}
