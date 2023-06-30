#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: the string to be capitalized.
 * Return: String with all vowels changed.
 */

char *leet(char *changed)
{
	int index, j;
	char minus[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char mayus[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char numbers[] = {'4', '3', '0', '7', '1', '\0'};

	for (index = 0; changed[index] != '\0'; ++index)
	{
		for (j = 0; j < 5; j++)
		{
			if (changed[index] == minus[j] || changed[index] == mayus[j])
			{
				changed[index] = numbers[j];
			}
		}
	}
	return (changed);
}
