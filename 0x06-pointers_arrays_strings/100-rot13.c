#include "main.h"
/**
* rot13 - encodes a string into rot13
* @s: string to encode
*
* Return: address of s
*/
char *rot13(char *str)
{
int i, j;
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

i = 0;
while (str[i] != '\0')
{
j = 0;
while (alpha[j] != '\0')
{
if (str[i] == alpha[j])
{
str[i] = rot[j];
break;
}
j++;
}
i++;
}
return (str);
}
