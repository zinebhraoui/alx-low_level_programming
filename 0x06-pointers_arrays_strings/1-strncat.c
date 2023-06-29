#include "main.h"

/**
 * _strncat - concatenates wo strings using at most
 * @dest: the string to appened upon
 * @src: the string to appened to dest
 * @n: the number of bytes from srcto appended to dest
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);

}
