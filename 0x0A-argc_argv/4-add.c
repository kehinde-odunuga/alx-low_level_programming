#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds two positive numners
 * @argc: the numbers of arguments
 * @argv: the argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int i, j, sum = 0;

if (argc < 2)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
if (atoi(argv[i]) < 0)
{
printf("Error\n");
return (1);
}
else
{
sum += atoi(argv[i]);
}
}
printf("%d\n", sum);
return (0);
}
return (0);
}
