#include <stdlib.h>
/**
 * array_size - returns the size of an array
 * @s: the string/array
 *
 * Return: size
 */

int array_size(char *s)
{
        int count;

        count = 0;
        if (s == NULL)
                return (count);
        while (*s)
        {
                count++;
                s += 1;
        }
        return (count);
}
/**
 * str_concat - concatenats two strings
* @s1: first string
 * @s2: second string
 *
 * Return: the new string
 */
char *str_concat(char *s1, char *s2, int last)
{
        int size_1;
        int size_2;
        int new_size;
        int counter;
        char *ptr;

        size_1 = array_size(s1);
        size_2 = array_size(s2);
        new_size = size_1 + size_2;
        if (new_size == 0)
        {
                ptr = malloc(1);
                ptr[0] = '\0';
                return (ptr);
        }
	if (last == 0)
        	ptr = malloc(new_size * sizeof(char) + 1);
	else
		ptr = malloc(new_size * sizeof(char) + 2);
        if (ptr)
        {
                counter = 0;
                size_2 = 0;
                while (counter < new_size)
                {
                        if (counter < size_1)
                        {
                                ptr[counter] = s1[counter];
                        }
                        else
                        {
                                ptr[counter] = s2[size_2];
                                size_2++;
                        }
                        counter++;
                }
		ptr[counter + 1] = '\n';
		if (last)
		{
			ptr[counter + 2] ='\0';
		}
                return (ptr);
        }
        return (ptr);
}
char *argstostr(int ac, char **av)
{
	char *ptr;
	char *temp;
	int count;
	
	ptr = NULL;
	count = 0;
	while (count < ac)
	{
		if (count + 1 == ac)
		{
			temp = str_concat(ptr, av[count], 1);
			free(ptr);
			ptr = temp;
		}
		else
		{	temp = str_concat(ptr, av[count], 0);
			free(ptr);
			ptr = temp;
		}
		count++;
	}
	return (ptr);

}
