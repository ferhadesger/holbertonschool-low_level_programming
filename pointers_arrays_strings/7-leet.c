#include "main.h"

/**
 * leet - encoder
 * @str: ptr to char
 * Return: char
 */
char *leet(char *str)
{
	char *let = "aAeEoOtTlL";
	char *num = "43071";
	int i = 0;

	while (*(str + i))
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			if (str[i] == let[j])
				str[i] = str[i] - let[j] + num[j / 2];
		}

		i++;
	}

	return (str);
}

