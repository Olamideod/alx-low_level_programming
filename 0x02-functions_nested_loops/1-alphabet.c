#include"main.h"

/**
* print_alphabet - arrange on the _putchar function to print
* all alphabet 
*/

void print_alphabet(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ++ch)
_putchar(ch);
_putchar('\n');
}
