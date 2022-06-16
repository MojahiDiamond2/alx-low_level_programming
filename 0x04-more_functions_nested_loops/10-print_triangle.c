#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int k, c;

		for (k = 1; k <= size; k++)
		{
			for (c = k; c < size; c++)
			{
				_putchar(' ');
			}
			for (c = 1; c <= k; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
