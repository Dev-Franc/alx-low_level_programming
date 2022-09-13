#include "main.h"

/**
 * print_alphabet_x10 - print aplhabet 10x
 *
 * Return: 0
 *
 */

void print_alphabet_x10(void)
{
	char a, i;

	for (i = 0; 1 <= 9; 1++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
