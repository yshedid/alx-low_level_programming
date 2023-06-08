#include <stdlib.h>
char **strtow(char *str)
{
	char **ptr, *temp, prev_char;
	int i, size;

	if (str == NULL || str == "")
		return (NULL);
	temp = str;
	size = 0;
	prev_char = 'a';
	while (*temp != '\0')
	{
		if(*temp == ' ' && prev_char != ' ')
		{
			prev_char = *temp;
			temp++;
			size++;
		}
		prev_char = *temp;
		temp++;
	}
	if (prev_char == ' ')
		size--;

	ptr = malloc((size + 1) * sizeof(ptr));
	i = 0;

}
