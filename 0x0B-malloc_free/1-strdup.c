#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: string to be copied
 *
 * Return: NULL in case of error, pointer to allocated
 * space
 */

char *_strdup(char *str)
{
	char *cpy;
	int i, l;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		l++;
	cpy = malloc(sizeof(char) * (l + 1));

	if (cpy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		cpy[i] = str[i];
	}

	cpy[l] = '\0';

	return (cpy);
}
