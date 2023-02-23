#include "main.h"
/**
 * _islower - checks if the charcter in lower case
 * @c:the character to check
 * Return: 1 if c is lowercase
 * 0 otherwise
 */
int _islower(int c)
{
if (c > 96)
	return (1);
else
	return (0);
}
