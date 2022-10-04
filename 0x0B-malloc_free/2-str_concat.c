#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s1: First string
 * @s2: Second string
 *
 * Return: NULL in the case of failure, but pointer to new sting in
 * case of success
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, concat_i = 0, l = 0;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] || s2[i]; i++)
		l++;

	concat_str = malloc(sizeof(char) * l);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[concat_i++] = s2[i];

	return (concat_str);
}
