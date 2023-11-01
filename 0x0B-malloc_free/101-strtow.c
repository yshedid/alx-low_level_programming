#include <stdlib.h>
#include <string.h>
char *word_helper(char *s, int, int);
/**
 * strtow - divides a string into words
 * @str: the string
 *
 * Return: and array of pointers to the words or NULL if it fails
 */
char **strtow(char *str)
{
	char **ptr;
	char **temp;
	int num_word;
	int size_word;
	int idx;
	int size_of_str;
	int i;

	if (str == NULL || strlen(str) == 0)
		return (NULL);

	ptr = NULL;
	size_of_str = strlen(str);
	i = 0;
	while (i < size_of_str)
	{
		if (str[i] != ' ')
		{
			size_word += 1;
			if (size_word == 1)
				idx = i;
		}
		else if (size_word > 0)
		{
			int j;

			num_word += 1;
			temp = ptr;
			ptr = (char **)malloc(num_word * 8 + 1);
			if (ptr == NULL)
				return (ptr);
			j = 0;
			while (j < num_word - 2 && temp != NULL)
			{
				ptr[j] = temp[j];
			}
			free(temp);

			ptr[num_word - 1] = word_helper(str, size_word, idx);
			size_word = 0;
		}
	}
	ptr[num_word] = '\0';
	return (ptr);
}
/**
 * word_helper - cuts a specific word from a string
 * @s: the sring
 * @size: the size of the given word
 * @idx: the starting point
 *
 * Return: the word
 */
char *word_helper(char *s, int size, int idx)
{
	char *ptr;
	int count;

	size += idx;
	ptr = malloc(size + 1);
	if (ptr == NULL)
		return (ptr);
	count = 0;
	while (idx < size)
	{
		ptr[count] = s[idx];
		idx++;
		count++;
	}
	ptr[size] = '\0';
	return (ptr);
}
