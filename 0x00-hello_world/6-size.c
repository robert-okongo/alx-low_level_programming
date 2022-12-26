#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
     char a;
     int b;
     long int c;
     long long int d;
     float e;
	printf("Size of a char: %d byte(s)", sizeof(a));
	printf("Size of an int: %d byte(s)", sizeof(b));
	printf("Size of a long int: %d byte(s)", sizeof(c));
	printf("Size of a long long int: %d byte(s)", sizeof(d));
	printf("Size of a float: %d byte(s)", sizeof(e));
        return (0);
}
