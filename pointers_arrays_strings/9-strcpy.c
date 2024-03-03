/**
 * _strcpy - copies the string
 * @dest: char*
 * @src: char*
 *
 * Return: char*
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len))
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';

	return (dest);
}
