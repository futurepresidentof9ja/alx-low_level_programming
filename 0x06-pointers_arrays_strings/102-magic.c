#include <stdio.h>
#include "main.h"
int main(void)
{
int n;
int j[5];
int *p;

j[2] = 98;
p = &n;
/**
* write your line of code here...
* Remember:
* - you are not allowed to use a
* - you are not allowed to modify p
* - only one statement
* - you are not allowed to code anything else than this line of code
*/
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("j[2] = %d\n", j[2]);
return (0);
}
