#include <stdio.h>

/**
* main - Starting point
*
* Description: printing of alphabet in lowercase and uppercase
*
* Return: Success
*/

int main(void)
{
char ch = 'a';
char CH = 'A';

/*print a - z*/
while (ch <= 'z')
{
putchar(ch);
++ch;
}

/*print A - Z*/
while (CH <= 'Z')
{
putchar(CH);
++CH;
}
putchar('\n');

return (0);
}

