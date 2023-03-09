#include "main.h"
/**
 * is_palindrome - checks of the string is palindrome or not
 * @s: the string
 *
 * Return: 1 if palindrom 0 otherwise
 */
int is_palindrome(char *s)
{
	int last;

	if (*s == '\0')
		return (1);

	last = _strlen_recursion(s) - 1;
	if (last == 0)
		return (0);
	return (pali_helper(s, 0, last));
}
/**
 * pali_helper - a helper function for is_palindrom
 * @s: the string
 * @first: first index and then the value is increased recursivly
 * @last: last index and then the value is decresed recursively
 *
 * Return: 1 if palinrom 0 otherwise
 */
int pali_helper(char *s, int first, int last)
{
	if (last < first)
		return (1);
	if (s[first] != s[last])
		return (0);
	else if (last == first && s[first] == s[last])
		return (1);
	return (pali_helper(s, first + 1, last - 1));

}
