#include <unistd.h>

/**
 * main - To print some random tesxt
 *
 * Return Always 1 (succeded)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
