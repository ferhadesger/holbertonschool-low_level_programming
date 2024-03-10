#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 * @haystack: Pointer to the string to search in.
 * @needle: Pointer to the substring to find.
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
