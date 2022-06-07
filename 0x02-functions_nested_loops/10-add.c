#include "main.h"
#include <stdio.h>

/*
 * add - adds two numbers and returns the result
 * @n: one integer to add
 * @m: second integer to add
 *
 * Return: the sum
 */

int add(int n, int m)
{
	return (n + m);
}

int main(void)
{
int n;

n = add(89, 9);
printf("%d\n", n);
return (0);
}
