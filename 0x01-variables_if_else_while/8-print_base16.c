
#include<stdio.h>

/** Starting point
*
* Description: print all the numbers of base 16 in lowercase
*
* Return: Success
*/

int main(void)
{
int digit = 48; /*48; decimal rep of 0*/

while (digit <= 102) /*102; decimal rep of f*/
{
putchar(digit);

/* addition of number ; */
if (digit == 57)
digit += 39;
++digit;
}
putchar('\n');

return (0);
}
