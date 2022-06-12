#include <stdio.h>
/**
 *  *  * main - prints all possible combinations of two two-digit numbers
 *   *   *
 *    *    * Return: Always (Success)
 *     **/
int main(void)
{
int i, k;
for (i = 0; i <= 100; i++)
{
for (k = 0; k <= 100; k++) 
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((k / 10) + '0');
putchar((k % 10) + '0');
if (!(i == 99 && k == 100))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
