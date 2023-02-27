/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: the length
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
