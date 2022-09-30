#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: a pointer to the string
 * @c: a character to be checked for
 * Return: a pointer to the first occurrence of the c in the s
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
++s;
}
if (*s == c)
{
return (s);
}
return (0);
}
