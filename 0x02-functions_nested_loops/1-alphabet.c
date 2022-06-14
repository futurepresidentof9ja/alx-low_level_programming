#include "main.h"
/**
 * main - print_alphabet
 *
 * Description: A function that prints the alphabet.
 * Return: Always 0.
 */

void print_alphabet(void);
{
char ch = 'a';

while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
