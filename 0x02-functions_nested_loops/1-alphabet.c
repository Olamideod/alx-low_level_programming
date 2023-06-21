
#include"main.h"

/**
* main - starting point
*
* Description: A program that prints _putchar, followed by a new line
*
* Return: Success
*/

int main(void)
{
char str[] = "_putchar";
int ch;

for (ch = 0; ch < 8; ++ch)
_putchar(str[ch]);
_putchar('\n');

return (0);
}
