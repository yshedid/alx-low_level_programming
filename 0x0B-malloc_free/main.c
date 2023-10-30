#include "main.h"
#include <stdio.h>
int main()
{
	char *nptr;

	nptr = str_concat("s", NULL);

	printf("%shi\n", nptr);
	return 1;
}
