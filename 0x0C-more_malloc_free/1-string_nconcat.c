#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second one
 * @n: number of bytes of the second string
 * Return: the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n > len2)
		n = len2;

	ptr = malloc(len1 + n + 1);
	if (ptr == NULL)
		return (ptr);
	i = 0;
	while (i < len1 + n)
	{
		if (i < len1)
			ptr[i] = s1[i];
		ptr[i] = s2[i - len1];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
