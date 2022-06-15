#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: integer to print
 */
void print_line(int n)
{
	int i;

	if (i <= 0)
		_putchar('\n');
	for (i = 0; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
