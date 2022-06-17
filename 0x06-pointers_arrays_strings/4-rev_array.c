#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @n: element of array
 * @a: array function
 */
void reverse_array(int *a, int n)
{
	int *b, i, aux, k;

	b = a;
	for (i = 0; i < n; i++)
		b++;
	for (k = 0; k <= n / 2; k++)
	{
		aux = a[k];
		a[k] = *b;
		*b = aux;
		b--;
	}
}
