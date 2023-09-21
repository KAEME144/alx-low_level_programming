#include "main.h"

/**
 * _strncat - copying a string
 * @dest: input value
 * @src: input va;ue
 * @n: input value
 * *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
			int j;

			j = 0;
			while (j < n && src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
			return (dest);
}
