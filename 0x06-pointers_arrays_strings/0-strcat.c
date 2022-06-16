#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates two strings
 * @src: string to append
 * @dest: string to append
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
