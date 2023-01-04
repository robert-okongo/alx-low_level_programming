#include "main.h"
#include "stdio.h"

/**
 * _memset - fills a block of memory with a value
 * @s: starting address of memory
 * @b: the desired value
 * @n: number of bytes to be modified
 *
 * Return: new array 
 */
char *_memset(char *s, char b, unsigned int n)
{

	 int i = 0;
  
	 for(; n > 0; i++)
	 {
		 s[i] = b;
		 n--;
	 }
	 return (s);
}
