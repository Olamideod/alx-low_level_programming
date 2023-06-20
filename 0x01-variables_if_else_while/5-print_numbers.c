
#include<stdio.h>

/**
* main - Starting point
*
* Description: prints all single digit numbers of base 10 starting from 0
*
* Return: Success
*/

int main(void)
{
int digit = 0;

while (digit <= 9)
{
printf("%i", digit);
++digit;
}
printf("\n");

return (0);
}

