#include "main.h"

/**
 * _strcmp - compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the seccond string to be compared.
 * Return: if str < str 2, the negative diffecrence of the firstunmatched chracter
 */

char *_strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);

}
