#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *x = "Hello World";
	char *s = &sx;

	int len;

	for (; *s != '\0')
	{
		len += 1;
		s++;
	}
	printf ("%d\n", len);
	return (0);
}
