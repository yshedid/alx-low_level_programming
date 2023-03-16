#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatnates first string and n chars of the second
 * @s1: first string
 * @s2: second string
 * @n: characters of the second string that should be included
 *
 * Return: a pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	size_t len_s1, len_s2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	if (n >= len_s2)
		n = len_s2;
	ptr = malloc(len_s1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < n + len_s1)
	{
		if (i < len_s1)
		{
			ptr[i] = s1[i];
			i++;
		}
		else
		{
			ptr[i] = s2[i + len_s1];
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
