#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function to print number from 0-10
 * Return: Always 0 (Succcess)
 */

int main(void)

{

int num = 0;

while (num < 10)
{
printf("%d", num);
num++;
}
putchar ('\n');
return (0);
}
