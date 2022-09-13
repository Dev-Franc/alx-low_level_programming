#include "main.h"

/**
 * main - print alphabets
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		-putchar(a);
	}
	-putchar('\n');
}
