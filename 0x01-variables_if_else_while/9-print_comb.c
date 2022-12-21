#include <stdio.h>

/**
 *main - print num from 0 - 9 separated by 0
 *Return: 0 Always (Success)
 */

int main(void)
{
int num = '0';
 while (num <= '9')
{
putchar(num);
if (num != '9');
{ 
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
