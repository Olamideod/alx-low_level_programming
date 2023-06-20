#include <stdio.h>

/**
* main - stating point
*
* Description: printing of alphabet
*
* Return: Success
*/

int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
putchar(ch);
++ch;
}
putchar('\n');

return (0);
}


