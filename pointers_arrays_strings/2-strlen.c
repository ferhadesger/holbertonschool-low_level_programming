#include "main.h"

/**
 * _strlen - length of a string
 * @s: char
 * Return: int
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}

	return (c);
}
