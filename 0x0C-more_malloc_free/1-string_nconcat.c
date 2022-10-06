#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatinates two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the seconf string
 * @n: the number of s2 characters to be concarinated
 * Return: a ponter to the newly allocated space in the memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, w;
char *ar;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
i = strlen(s1);
w = strlen(s2);
if (n > w)
{
n = w;
}
ar = malloc((sizeof(char) * (i + n)) +1);
if (ar == NULL)
{
return (NULL);
}
for (j = 0; j < (i + n); j++)
{
if (j < i)
{
ar[j] = s1[j];
}
else
ar[j] = s2[j - i];
}
ar[j] = '\0';
return (ar);
}
