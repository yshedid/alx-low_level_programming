#include "main.h"
#include <stdio.h>
int main()
{
	char *ptr;

	ptr = str_concat("hello"," world!");
	if (ptr == NULL)
		printf("null");
	printf("hi %s", ptr);
}
