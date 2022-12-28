#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there*/
/**
 * main - Entry point
 *
 * return: 0 (success)
 */
int main(void)
{
	int n;

	int result;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
        result = n % 10;
	 if (result > 5)
                printf("Last digit of %d is %d and is greater than 5\n", n, result);
         if (result == 0)
                printf("Last digit of %d is %d and is 0\n", n, result);
         if (result < 6 && result != 0)
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, result);
 return (0);
}
