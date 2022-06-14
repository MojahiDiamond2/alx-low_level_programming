#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string pointer for this function
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0': s++)
	{
		len += 1;
	}
	return (len);
}
