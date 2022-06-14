#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *x = "Hello World";
	char *s = &x;

	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
		s++;
	}
	printf ("%d\n", strlen(x));
	return (0);
}
