#include "main.h"
#include <string.h>

/**
 * *_strncpy - copies a string
 * @dest: first function
 * @src: second function
 * @n: third function
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
