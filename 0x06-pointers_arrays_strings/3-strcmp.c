#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: 0 if they are equal, -num if s1 < s2, +num if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
char *str_one = s1;
char *str_two = s2;

while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
{
str_one++;
str_two++;
}

return (*str_one - *str_two);
}
