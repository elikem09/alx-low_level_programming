#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main()
{
char n;

n = 97;
while (n <= 122)
{
if (n == 101 || n == 113)
{
n++;
continue;
}
putchar(n);
n++;
}
putchar('\n');
return (0);
}


