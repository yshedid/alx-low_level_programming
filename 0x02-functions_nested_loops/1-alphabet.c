#include "main.h"
void print_alphabet();
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
/**
 * print_alphabet - prints the alphabet in lower case
 */
void print_alphabet()
{
char i;
i = 'a';
while(i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
