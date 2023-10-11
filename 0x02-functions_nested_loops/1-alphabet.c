#include "main.h"
/**
 * print_alphabet - print_alphabet function
 *
 * Description: An algotithim that prints the alphabet followed by a new line.
 *
 * Return: No Return type.
 */
void print_alphabet(void);
{
	char lowercase_alphab;

	for (lowercase_alphab = 'a'; lowercase_alphab <= 'z'; lowercase_alphab++)
	{
		putchar(lowercase_alphab);
	}
	putchar('\n');
}
