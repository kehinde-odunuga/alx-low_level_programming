#include "main.h"
/**
 * _strncat- concatinates two strings
 * @dest: a pointer to the destination string
 * @src: a pointer to the source string
 * @n: number of bytes to be used from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
