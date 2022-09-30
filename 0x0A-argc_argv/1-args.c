#include <stdio.h>
/**
 * main - prints its name followed by a new line
 * @argc: the numbers of arguments
 * @argv: the argument vector
 * Return: 0 on success
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
