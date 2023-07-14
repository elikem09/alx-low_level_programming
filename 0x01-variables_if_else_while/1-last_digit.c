#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("if the last digit of %d is %d and it is greater than 5\n", n, m);
	if (m == 0)
		printf("if the last digit of %d is %d and is 0\n", n, m);
	else
		printf("if the last digit of %d is %d and and is less than 6 and not \n0", n, m);
	/* your code goes there */
	return (0);
}
