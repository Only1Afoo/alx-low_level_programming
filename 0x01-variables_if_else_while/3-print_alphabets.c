#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch = 'a';
int CH = 'A';

while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (ch <= 'Z')
{
putchar(CH);
CH++;
}
putchar('\n');
return (0);
}
