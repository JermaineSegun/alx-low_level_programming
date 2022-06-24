#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: 0
 **/

int main(int argc, char *argv[])
{
/* to suppress unused variable warning */
argv = argv;
printf("%d\n", argc - 1);
return (0);
}
