
#include<stdio.h>

/**
* main - Starting point
*
* Description: print 0, 1, - 9
*
* Return: Success
*/

int main(void)
{
int digit = 0;

while (digit <= 9)
{
putchar(digit + 48);

if (digit != 9)
{
putchar(',');
putchar(' ');
}

++digit;
}
putchar('\n');

return (0);
}


