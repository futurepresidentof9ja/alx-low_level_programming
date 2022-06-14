#include "main.h"
/**
 * print_alphabet - Print lower case alphabets
 *
 * Description: A function that prints the alphabet.
 */

void print_alphabet(void)
{
char ch = 'a';

while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
