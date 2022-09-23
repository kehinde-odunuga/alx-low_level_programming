#include "main.h"
/**
 * _strcat - concatinates two strings
 * @dest: the pointer to the destinaton
 * @src: the pointer to the source string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
int k;

while (src[i] != '\0')
{
i++;
}
while (dest[j] != '\0')
{
j++;
}
for (k = j; k < (i + j); k++)
{
dest[k] = src[k - j];
}
dest[k] = '\0';
return (dest);
}
