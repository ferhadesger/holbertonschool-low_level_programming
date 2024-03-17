#include <stdlib.h>

/**
 * str_concat - concatenates two string
 * @s1: ptr to a char
 * @s2: ptr to a char
 * Return: ptr
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	char *con;
	int len1;
	int len2;

	len1 = 0;

	len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	con = malloc(sizeof(char) * (len1 + len2 + 1));

	if (con == NULL)
		return (NULL);

	for (i = 0; i < len1 + len2; i++)
	{
		if (i < len1)
			con[i] = s1[i];
		else
			con[i] = s2[i - len1];
	}

	con[len1 + len2] = '\0';

	return (con);
}
