#include<stdio.h>

/**
* main - Starting point
*
* Description: print a-z in reverse
*
* Return: Success
*/

int main(void)
{
char ch = 'z';

while (ch >= 'a')
{
putchar(ch);
--ch;
}
putchar('\n');

return (0);
}
