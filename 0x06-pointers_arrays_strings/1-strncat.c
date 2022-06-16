#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenates two strings
 * @src: first function
 * @dest: second function
 * @n: third function
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
