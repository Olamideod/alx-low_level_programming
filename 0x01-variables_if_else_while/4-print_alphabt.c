#include<stdio.h>

/**
* main - Starting point
*
* Description: print all aplhabet letters except q and e in lowercase
*
* Return: Success
*/

int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
if (ch == 'e' || ch == 'q')
++ch;
putchar(ch);
++ch;
}
putchar('\n');

return (0);
}

