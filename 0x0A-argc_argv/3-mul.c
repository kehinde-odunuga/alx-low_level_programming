#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name followed by a new line
 * @argc: the numbers of arguments
 * @argv: the argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
else
printf("Error\n");
return (1);
}
