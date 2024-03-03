#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: ptr
 * @src: ptr
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int len = 0;

	while (*(dest + len))
	{
		len++;
	}

	while (*(src + index))
	{
		dest[len++] = src[index];
		index++;
	}

	return (dest);
}

