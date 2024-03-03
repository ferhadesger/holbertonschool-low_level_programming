#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: ptr
 * @src: ptr
 * @n: int
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int len = 0;

	while (*(dest + len))
	{
		len++;
	}

	while (*(src + index) && index < n)
	{
		dest[len++] = src[index];
		index++;
	}

	return (dest);
}

