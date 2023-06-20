
#include<stdio.h>

/**
* main - Starting point
*
* Description: print all single digit numbers of base 10 starting from 0
* followed by a new line
*
* Return: Success
*/

int main(void)
{
int digit = 0;

while (digit <= 9)
{
/*convert digit to ASCII representation*/
putchar(digit + '0');
++digit;
}
putchar('\n');

return (0);
}
