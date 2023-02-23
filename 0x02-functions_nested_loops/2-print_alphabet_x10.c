#include "main.c"
/**
 * print_alphabet_x10 - prints the alphabet in lower case
 */
void print_alphabet_x10(void);
void print_alphabet_x10(void)
{
int counter;
counter = 10;
while (counter > 0)
{
char i;
i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
_putchar('\n');
counter--;
}
}
