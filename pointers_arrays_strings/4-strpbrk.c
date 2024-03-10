#include "main.h"

/**
 * _strpbrk - finds
 * @s: ptr to char
 * @accept: ptr to char
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i])
	{
		j = 0;

		while (s[i] && accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);

			j++;
		}

		i++;
	}

	return ('\0');
}
