#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: a pointer to the destination 
 * @src: a pointer to the source to be copied
 * @n: the number of bytes to be copied
 * Return: a pointer the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
