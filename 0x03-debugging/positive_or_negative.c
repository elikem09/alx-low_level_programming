#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - print number
 * @i: integer
 * if the number greater than 0: is positive, if the number is 0: is zero
 * if the number less than 0: is positive, if the number is 0: is zero
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
