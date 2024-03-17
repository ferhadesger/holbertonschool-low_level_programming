#include <stdlib.h>

/**
 * _strdup - duplicate
 * @str: ptr to a char
 * Return: ptr
 */
char *_strdup(char *str)
{
	char *cpy;
	int len;
	int i;

	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		cpy[i] = str[i];

	cpy[len] = '\0';

	return (cpy);
}
