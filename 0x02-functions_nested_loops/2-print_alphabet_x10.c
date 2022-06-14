#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet in lowercase
*
* return: 0
*/
void print_alphabet_x10(void)
{
char c = '\0';
int n = 10;

while (n--)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
}
