#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: main str to be examined
 * @needle: seached in haystack
 * Return: a pointer to the beginnig of the locad sub str
 */
char *_strstr(char *haystack, char *needle)
{
char *str1, *str2;

while (*haystack != '\0')
{
str1 = haystack;
str2 = needle;

while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
{
haystack++;
str2++;
}
if (*str2 == '\0')
return (str1);
haystack = str1 + 1;
}
return (0);
}
